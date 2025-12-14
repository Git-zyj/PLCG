#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)21610;
unsigned short var_8 = (unsigned short)14490;
int var_11 = 995729049;
_Bool var_12 = (_Bool)0;
short var_15 = (short)-14066;
int zero = 0;
int var_16 = 1295218083;
unsigned short var_17 = (unsigned short)59858;
unsigned int var_18 = 2487667455U;
signed char var_19 = (signed char)83;
signed char var_20 = (signed char)-109;
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
