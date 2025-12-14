#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)45;
unsigned long long int var_5 = 17261754408379332032ULL;
signed char var_6 = (signed char)-63;
int var_7 = -473302527;
unsigned long long int var_8 = 703685044190775571ULL;
long long int var_9 = 4606814807425259815LL;
int zero = 0;
signed char var_11 = (signed char)-54;
signed char var_12 = (signed char)107;
unsigned char var_13 = (unsigned char)56;
int var_14 = 430080821;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
