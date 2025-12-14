#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 333397149634419113ULL;
int var_3 = 927364505;
unsigned int var_6 = 1037451002U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 3019561221143472839ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)47;
short var_14 = (short)-5555;
long long int var_15 = 8732320482602297944LL;
unsigned long long int var_16 = 7391350989953857089ULL;
void init() {
}

void checksum() {
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
