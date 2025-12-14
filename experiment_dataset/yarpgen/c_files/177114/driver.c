#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45884;
unsigned int var_2 = 2535264927U;
long long int var_3 = 7054417298781571634LL;
short var_4 = (short)6857;
int var_7 = 528459192;
int var_8 = -815058614;
unsigned char var_10 = (unsigned char)247;
unsigned int var_12 = 4144423670U;
int zero = 0;
unsigned int var_18 = 545980379U;
unsigned long long int var_19 = 7089636221839160919ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3692204068U;
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
