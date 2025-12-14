#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
long long int var_1 = 3439024857984510669LL;
unsigned char var_7 = (unsigned char)139;
unsigned long long int var_8 = 8445563805191264962ULL;
unsigned short var_11 = (unsigned short)59327;
unsigned short var_13 = (unsigned short)9240;
int zero = 0;
int var_14 = 1926172216;
unsigned short var_15 = (unsigned short)29295;
void init() {
}

void checksum() {
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
