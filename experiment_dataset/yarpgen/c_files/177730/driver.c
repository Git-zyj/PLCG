#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4101038168U;
signed char var_1 = (signed char)-44;
signed char var_7 = (signed char)84;
signed char var_8 = (signed char)42;
signed char var_9 = (signed char)-126;
unsigned int var_13 = 273380674U;
unsigned short var_16 = (unsigned short)21436;
int zero = 0;
unsigned long long int var_20 = 3282242692841145425ULL;
short var_21 = (short)11263;
short var_22 = (short)-31013;
short var_23 = (short)-1365;
unsigned short var_24 = (unsigned short)57510;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
