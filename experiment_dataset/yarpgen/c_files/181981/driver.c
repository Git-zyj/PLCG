#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3122;
short var_4 = (short)4104;
unsigned long long int var_16 = 13893696761144004338ULL;
int zero = 0;
short var_20 = (short)-7361;
long long int var_21 = -4404307404375145296LL;
unsigned long long int var_22 = 9857199489115259925ULL;
int var_23 = 1054780386;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
