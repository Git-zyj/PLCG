#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_7 = 3085711734U;
unsigned int var_12 = 3244994563U;
unsigned int var_13 = 4170121004U;
int var_14 = 233057578;
int zero = 0;
short var_17 = (short)-29395;
long long int var_18 = 2006774211819517064LL;
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
