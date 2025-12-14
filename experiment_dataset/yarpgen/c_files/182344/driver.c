#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16503;
unsigned int var_5 = 3434109984U;
short var_6 = (short)-882;
signed char var_11 = (signed char)(-127 - 1);
_Bool var_13 = (_Bool)0;
int var_15 = 1017641787;
signed char var_16 = (signed char)60;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -972909322;
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
