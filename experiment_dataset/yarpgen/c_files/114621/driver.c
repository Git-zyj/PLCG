#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 364055890;
long long int var_1 = 9207623783788840686LL;
unsigned short var_3 = (unsigned short)22584;
short var_7 = (short)-600;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 8361122337545803667ULL;
unsigned long long int var_12 = 932128019207780235ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)135;
long long int var_14 = -8917716087473190831LL;
unsigned long long int var_15 = 1627570533302062002ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
