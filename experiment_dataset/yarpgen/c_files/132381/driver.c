#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19874;
int var_3 = 1228054644;
int var_4 = 1672568625;
long long int var_6 = 4879516590445108496LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 16921405190912499258ULL;
unsigned long long int var_11 = 1431737951126928307ULL;
short var_13 = (short)-25451;
unsigned long long int var_14 = 17351179998140721677ULL;
long long int var_16 = -6578437940392285503LL;
int zero = 0;
unsigned char var_17 = (unsigned char)143;
int var_18 = 1066836516;
short var_19 = (short)-10150;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
