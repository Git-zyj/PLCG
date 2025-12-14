#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5527525559197584510LL;
int var_5 = 38418144;
_Bool var_8 = (_Bool)0;
long long int var_10 = 7131348711717101118LL;
long long int var_12 = -7341558427541759995LL;
int var_14 = -488490273;
unsigned char var_15 = (unsigned char)203;
int zero = 0;
unsigned char var_18 = (unsigned char)54;
unsigned short var_19 = (unsigned short)53424;
long long int var_20 = 7216982134977449770LL;
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
