#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
long long int var_1 = -5285312581708834651LL;
unsigned char var_2 = (unsigned char)4;
unsigned short var_3 = (unsigned short)16656;
unsigned long long int var_5 = 12336294417233257164ULL;
signed char var_6 = (signed char)120;
signed char var_8 = (signed char)76;
_Bool var_10 = (_Bool)0;
short var_13 = (short)-767;
int zero = 0;
unsigned int var_14 = 3661873300U;
short var_15 = (short)-25185;
int var_16 = -731388898;
unsigned short var_17 = (unsigned short)14686;
void init() {
}

void checksum() {
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
