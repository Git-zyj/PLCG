#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24988;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-112;
unsigned short var_8 = (unsigned short)48062;
unsigned short var_9 = (unsigned short)19776;
unsigned long long int var_11 = 11530830527296503416ULL;
int zero = 0;
long long int var_12 = 6132488008706412548LL;
_Bool var_13 = (_Bool)0;
int var_14 = -1042381384;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
