#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 447890431U;
unsigned short var_4 = (unsigned short)44064;
unsigned char var_10 = (unsigned char)14;
int var_11 = 883534990;
long long int var_13 = 6827729717808787393LL;
int zero = 0;
long long int var_18 = -2870514071990004874LL;
unsigned int var_19 = 917546617U;
unsigned long long int var_20 = 14780310080440481147ULL;
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
