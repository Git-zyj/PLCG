#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-49;
signed char var_4 = (signed char)-76;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)65;
signed char var_13 = (signed char)-88;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-20;
void init() {
}

void checksum() {
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
