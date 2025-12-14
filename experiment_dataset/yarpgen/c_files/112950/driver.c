#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-88;
long long int var_5 = 569190329692520668LL;
signed char var_6 = (signed char)101;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-97;
int var_9 = 527072732;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 2738985212U;
signed char var_17 = (signed char)103;
_Bool var_18 = (_Bool)0;
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
