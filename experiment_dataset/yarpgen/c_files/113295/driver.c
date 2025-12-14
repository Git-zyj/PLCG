#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
int var_2 = 1389187824;
int var_5 = 1289871474;
_Bool var_6 = (_Bool)1;
short var_10 = (short)1764;
int zero = 0;
unsigned short var_12 = (unsigned short)19694;
long long int var_13 = 5770305391576260846LL;
short var_14 = (short)-10646;
unsigned int var_15 = 1551510191U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
