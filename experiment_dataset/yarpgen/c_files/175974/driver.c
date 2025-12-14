#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 838204384U;
unsigned int var_3 = 442993263U;
signed char var_5 = (signed char)-69;
unsigned char var_8 = (unsigned char)206;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 3428454685502174286ULL;
int zero = 0;
short var_11 = (short)-16558;
int var_12 = -955525920;
short var_13 = (short)-3882;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
