#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_7 = (signed char)111;
unsigned int var_9 = 3020910752U;
short var_13 = (short)-5106;
int zero = 0;
unsigned short var_16 = (unsigned short)8934;
unsigned int var_17 = 3119596855U;
unsigned short var_18 = (unsigned short)14813;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
