#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = 8341397485670671960LL;
int var_5 = -1332004223;
unsigned long long int var_8 = 15165930277546365182ULL;
int var_9 = -393374325;
int zero = 0;
unsigned short var_14 = (unsigned short)29409;
unsigned char var_15 = (unsigned char)103;
int var_16 = -1905212160;
void init() {
}

void checksum() {
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
