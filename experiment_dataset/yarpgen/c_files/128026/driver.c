#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-14;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)103;
unsigned short var_6 = (unsigned short)35176;
unsigned char var_8 = (unsigned char)104;
long long int var_9 = 107534455858107085LL;
int zero = 0;
short var_12 = (short)-9361;
short var_13 = (short)3630;
int var_14 = -82290793;
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
