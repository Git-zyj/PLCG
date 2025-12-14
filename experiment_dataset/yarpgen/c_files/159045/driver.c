#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10134;
signed char var_5 = (signed char)-28;
int var_7 = 1906932597;
unsigned char var_8 = (unsigned char)106;
int var_9 = -718779854;
unsigned int var_12 = 3547536539U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1490880009U;
signed char var_21 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
