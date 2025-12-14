#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8108202009340878946LL;
long long int var_1 = -6846907083753903633LL;
long long int var_2 = -8191664955343833155LL;
unsigned long long int var_4 = 12980738564134506865ULL;
int var_7 = 1766529335;
unsigned long long int var_8 = 11073692149995749098ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 909965052053576416ULL;
void init() {
}

void checksum() {
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
