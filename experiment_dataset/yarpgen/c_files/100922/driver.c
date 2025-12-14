#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60633;
unsigned int var_10 = 2152408514U;
signed char var_12 = (signed char)-127;
unsigned short var_18 = (unsigned short)44230;
int zero = 0;
unsigned int var_19 = 997646794U;
long long int var_20 = -1387342340320384018LL;
void init() {
}

void checksum() {
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
