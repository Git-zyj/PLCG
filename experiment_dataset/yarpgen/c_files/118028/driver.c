#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
unsigned short var_2 = (unsigned short)47627;
unsigned short var_3 = (unsigned short)41255;
int var_4 = 1084705289;
long long int var_8 = -3477436783311729230LL;
unsigned int var_9 = 2871763695U;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-8436;
unsigned short var_12 = (unsigned short)17635;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
