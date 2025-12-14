#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -729180192;
unsigned long long int var_2 = 2824507957039067164ULL;
unsigned short var_3 = (unsigned short)55332;
long long int var_4 = -1808011594248811315LL;
unsigned char var_6 = (unsigned char)181;
int zero = 0;
long long int var_10 = 8613622721720207555LL;
unsigned char var_11 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
