#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -598119689805335515LL;
int var_4 = -1218393183;
long long int var_7 = -1784221586942531151LL;
int var_8 = -7146397;
int zero = 0;
unsigned short var_13 = (unsigned short)51823;
unsigned short var_14 = (unsigned short)5078;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
