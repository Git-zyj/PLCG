#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 14282734013128324617ULL;
unsigned short var_16 = (unsigned short)50165;
int zero = 0;
unsigned long long int var_19 = 17093085515375596581ULL;
unsigned short var_20 = (unsigned short)11660;
int var_21 = -1172887571;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
