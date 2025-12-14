#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
unsigned int var_1 = 2033541815U;
long long int var_2 = -336523021213363725LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 4222700408U;
_Bool var_6 = (_Bool)0;
short var_7 = (short)26019;
unsigned int var_8 = 2560019156U;
unsigned int var_11 = 2998241638U;
unsigned int var_12 = 3358310762U;
int zero = 0;
unsigned long long int var_13 = 10393027358545238043ULL;
unsigned int var_14 = 1785741238U;
unsigned char var_15 = (unsigned char)215;
void init() {
}

void checksum() {
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
