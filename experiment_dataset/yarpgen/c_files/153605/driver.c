#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned int var_1 = 2079863238U;
int var_2 = -956761814;
long long int var_3 = 7364843218662284654LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 12304403047564351018ULL;
unsigned long long int var_8 = 8844267407477314580ULL;
long long int var_9 = -4428367134941202581LL;
int zero = 0;
unsigned int var_10 = 3968146068U;
unsigned int var_11 = 205267326U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
