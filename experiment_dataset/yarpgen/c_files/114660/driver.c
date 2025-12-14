#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -289458312800500253LL;
unsigned short var_1 = (unsigned short)61394;
signed char var_3 = (signed char)107;
signed char var_4 = (signed char)94;
int var_6 = 1334458285;
unsigned int var_7 = 4073396291U;
unsigned int var_11 = 1302069551U;
unsigned short var_12 = (unsigned short)14141;
unsigned short var_14 = (unsigned short)17232;
signed char var_15 = (signed char)101;
short var_17 = (short)-12549;
int zero = 0;
unsigned long long int var_18 = 12780065543981808066ULL;
int var_19 = -394974746;
void init() {
}

void checksum() {
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
