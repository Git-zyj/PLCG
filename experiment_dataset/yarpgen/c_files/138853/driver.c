#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19249;
int var_2 = 135579301;
unsigned long long int var_4 = 17754330479362925433ULL;
int var_5 = -788170645;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)20829;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = 6792015317875118295LL;
unsigned short var_13 = (unsigned short)4837;
unsigned short var_14 = (unsigned short)40502;
signed char var_15 = (signed char)-11;
unsigned short var_16 = (unsigned short)16813;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
