#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)96;
unsigned char var_7 = (unsigned char)59;
unsigned char var_9 = (unsigned char)209;
long long int var_18 = 5583354726090744725LL;
int zero = 0;
unsigned int var_19 = 133644368U;
short var_20 = (short)-5704;
unsigned short var_21 = (unsigned short)51948;
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
