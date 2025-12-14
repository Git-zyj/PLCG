#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5888466155389965316ULL;
unsigned int var_5 = 4062768305U;
unsigned long long int var_11 = 1661430101438630561ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 18411803747970866360ULL;
signed char var_15 = (signed char)45;
int zero = 0;
long long int var_16 = -2914796763544438260LL;
unsigned short var_17 = (unsigned short)14023;
unsigned short var_18 = (unsigned short)29778;
int var_19 = -240977731;
signed char var_20 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
