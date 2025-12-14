#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9544;
unsigned char var_2 = (unsigned char)74;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)169;
unsigned int var_8 = 14251924U;
unsigned short var_16 = (unsigned short)39202;
int zero = 0;
unsigned short var_17 = (unsigned short)26188;
unsigned int var_18 = 907444240U;
unsigned long long int var_19 = 7944011483739636668ULL;
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
