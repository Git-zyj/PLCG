#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1822575525;
int var_10 = -2128034975;
unsigned long long int var_13 = 934928911840752885ULL;
int zero = 0;
unsigned long long int var_18 = 3501211088385727028ULL;
unsigned int var_19 = 180825343U;
unsigned short var_20 = (unsigned short)56937;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
