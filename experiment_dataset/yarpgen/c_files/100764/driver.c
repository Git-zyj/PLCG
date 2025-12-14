#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14033527561772848983ULL;
signed char var_7 = (signed char)-50;
short var_8 = (short)7190;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 121106213U;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 9614330612759389949ULL;
long long int var_16 = -1478235212598185862LL;
int zero = 0;
unsigned char var_18 = (unsigned char)51;
unsigned long long int var_19 = 15717002742484034202ULL;
unsigned char var_20 = (unsigned char)11;
unsigned short var_21 = (unsigned short)49480;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
