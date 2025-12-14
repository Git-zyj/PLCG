#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2325;
unsigned short var_5 = (unsigned short)31894;
short var_6 = (short)16640;
unsigned char var_12 = (unsigned char)250;
long long int var_13 = 4076910310918603064LL;
short var_16 = (short)-28993;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = 7925645410926975778LL;
long long int var_19 = 1799748812348724686LL;
unsigned long long int var_20 = 931867269146826281ULL;
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
