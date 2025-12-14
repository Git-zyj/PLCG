#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1884001058U;
long long int var_3 = -4681751823426909111LL;
unsigned char var_6 = (unsigned char)158;
unsigned short var_9 = (unsigned short)65344;
unsigned short var_13 = (unsigned short)40373;
int zero = 0;
unsigned short var_17 = (unsigned short)11489;
unsigned int var_18 = 2410053232U;
signed char var_19 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
