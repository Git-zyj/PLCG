#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10367061610679858106ULL;
signed char var_1 = (signed char)-5;
unsigned char var_2 = (unsigned char)12;
_Bool var_4 = (_Bool)0;
short var_5 = (short)30569;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 11153020298835818170ULL;
unsigned long long int var_13 = 14615807840962295944ULL;
unsigned char var_14 = (unsigned char)248;
signed char var_16 = (signed char)107;
int zero = 0;
short var_18 = (short)-18181;
short var_19 = (short)5016;
unsigned long long int var_20 = 13719308392333479059ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
