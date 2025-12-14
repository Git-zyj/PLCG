#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-39;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-19360;
long long int var_16 = -6862799687505190450LL;
int zero = 0;
int var_19 = 1460503564;
unsigned int var_20 = 3335278721U;
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
