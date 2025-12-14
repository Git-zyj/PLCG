#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8979;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)119;
long long int var_9 = -9138849379547862718LL;
unsigned int var_10 = 2280698419U;
short var_16 = (short)-13022;
int zero = 0;
int var_17 = 625761873;
signed char var_18 = (signed char)-95;
void init() {
}

void checksum() {
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
