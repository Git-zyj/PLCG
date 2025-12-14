#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -571801680;
unsigned short var_4 = (unsigned short)32180;
unsigned int var_8 = 1058534828U;
unsigned long long int var_9 = 1086086271860900975ULL;
signed char var_10 = (signed char)79;
int zero = 0;
unsigned int var_12 = 2911063215U;
long long int var_13 = 7910211756328646462LL;
signed char var_14 = (signed char)34;
signed char var_15 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
