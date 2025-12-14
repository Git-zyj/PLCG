#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)10790;
unsigned long long int var_10 = 17371148022532542034ULL;
unsigned long long int var_11 = 8284885308306809324ULL;
int var_16 = 1515444143;
int zero = 0;
unsigned int var_17 = 374154599U;
unsigned short var_18 = (unsigned short)22452;
short var_19 = (short)19590;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
