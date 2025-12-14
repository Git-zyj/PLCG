#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 539902727U;
unsigned long long int var_1 = 13219317245327690619ULL;
signed char var_2 = (signed char)-12;
_Bool var_4 = (_Bool)0;
long long int var_5 = -4329765460534255664LL;
int var_7 = -1214966158;
unsigned char var_8 = (unsigned char)250;
short var_9 = (short)-28035;
int zero = 0;
signed char var_11 = (signed char)62;
unsigned int var_12 = 357249932U;
_Bool var_13 = (_Bool)1;
long long int var_14 = 8432964100915085669LL;
unsigned short var_15 = (unsigned short)31972;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
