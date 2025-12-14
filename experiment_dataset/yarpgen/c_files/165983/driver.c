#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6670676956759168850LL;
_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 14267271042899316427ULL;
unsigned char var_8 = (unsigned char)2;
unsigned int var_10 = 2790059294U;
unsigned char var_18 = (unsigned char)226;
int zero = 0;
unsigned short var_19 = (unsigned short)52757;
unsigned int var_20 = 4022618440U;
unsigned long long int var_21 = 5213852645345854610ULL;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)52947;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
