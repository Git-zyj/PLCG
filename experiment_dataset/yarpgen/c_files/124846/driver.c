#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 298577897374944965LL;
long long int var_5 = -3083809269496171772LL;
unsigned short var_7 = (unsigned short)39080;
int var_8 = -1382971960;
unsigned short var_11 = (unsigned short)24087;
short var_12 = (short)20266;
long long int var_15 = -2163161885549371516LL;
unsigned char var_19 = (unsigned char)171;
int zero = 0;
unsigned char var_20 = (unsigned char)79;
long long int var_21 = 8293849913163821449LL;
void init() {
}

void checksum() {
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
