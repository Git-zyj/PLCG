#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-17111;
int var_6 = 1277799413;
long long int var_9 = 4207320418545958699LL;
long long int var_10 = -7782620665448652843LL;
unsigned int var_11 = 144884613U;
unsigned char var_13 = (unsigned char)179;
long long int var_15 = 2652285019783541197LL;
int zero = 0;
int var_17 = -1368748547;
unsigned char var_18 = (unsigned char)202;
long long int var_19 = 823811043056080635LL;
unsigned int var_20 = 2665252689U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
