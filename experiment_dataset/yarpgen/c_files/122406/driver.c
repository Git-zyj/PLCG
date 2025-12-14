#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1731964214U;
long long int var_2 = -4108451115151293140LL;
long long int var_4 = -3568912117983300446LL;
short var_5 = (short)23145;
short var_6 = (short)-10473;
unsigned char var_7 = (unsigned char)155;
unsigned char var_8 = (unsigned char)86;
unsigned long long int var_9 = 5927783408162526015ULL;
short var_10 = (short)-13979;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)184;
long long int var_14 = -3516057786736517196LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
