#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4972;
long long int var_2 = 1281348723389098852LL;
int var_5 = -565327670;
unsigned char var_6 = (unsigned char)150;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1651392148U;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
