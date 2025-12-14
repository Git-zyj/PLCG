#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9056012367648290864LL;
unsigned int var_2 = 3559438768U;
long long int var_3 = -3157340931914658181LL;
unsigned char var_4 = (unsigned char)71;
unsigned long long int var_7 = 1379764787141271059ULL;
_Bool var_9 = (_Bool)1;
long long int var_11 = 1136065343272127192LL;
unsigned char var_15 = (unsigned char)52;
int zero = 0;
unsigned long long int var_18 = 4353613502581896595ULL;
unsigned char var_19 = (unsigned char)10;
unsigned long long int var_20 = 12244257929078621416ULL;
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
