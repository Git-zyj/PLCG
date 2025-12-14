#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54914;
long long int var_4 = 8780691412795789679LL;
short var_5 = (short)-1383;
unsigned char var_8 = (unsigned char)129;
unsigned short var_10 = (unsigned short)58800;
unsigned int var_11 = 2452702136U;
unsigned long long int var_12 = 6099978084520834169ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)448;
long long int var_15 = -4879987159519805832LL;
unsigned int var_16 = 4068465800U;
short var_17 = (short)7545;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
