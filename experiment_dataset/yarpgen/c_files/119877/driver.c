#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1760270090U;
unsigned short var_8 = (unsigned short)37568;
long long int var_9 = 5057430406716196745LL;
unsigned short var_10 = (unsigned short)36116;
int zero = 0;
unsigned short var_19 = (unsigned short)8295;
signed char var_20 = (signed char)65;
_Bool var_21 = (_Bool)0;
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
