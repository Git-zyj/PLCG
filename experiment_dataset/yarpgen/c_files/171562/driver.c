#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)72;
unsigned char var_8 = (unsigned char)26;
_Bool var_11 = (_Bool)0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 8231882073223291447LL;
unsigned short var_18 = (unsigned short)4244;
int zero = 0;
short var_19 = (short)-19920;
unsigned short var_20 = (unsigned short)44729;
unsigned long long int var_21 = 14961819880382002177ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
