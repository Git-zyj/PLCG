#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31287;
unsigned short var_5 = (unsigned short)42440;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-10585;
unsigned long long int var_12 = 12959805745642746972ULL;
unsigned long long int var_13 = 17581299933615814968ULL;
unsigned char var_14 = (unsigned char)120;
unsigned short var_15 = (unsigned short)31609;
int zero = 0;
int var_17 = 1382875558;
long long int var_18 = 1238097476082918352LL;
int var_19 = 1670550304;
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
