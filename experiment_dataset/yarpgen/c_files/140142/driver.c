#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3803583621677260801LL;
signed char var_4 = (signed char)-80;
long long int var_6 = 7767084252236926709LL;
short var_8 = (short)3095;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_13 = (short)-17858;
unsigned int var_14 = 2101414596U;
unsigned long long int var_15 = 12999374363759396879ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
