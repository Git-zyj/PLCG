#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1092712913;
unsigned int var_4 = 753842820U;
signed char var_8 = (signed char)69;
long long int var_9 = 7888708578586152063LL;
unsigned int var_10 = 608402757U;
unsigned char var_11 = (unsigned char)143;
int var_15 = 764174417;
int zero = 0;
unsigned char var_19 = (unsigned char)177;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
