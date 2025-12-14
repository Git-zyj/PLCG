#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)16;
signed char var_4 = (signed char)-8;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)90;
signed char var_12 = (signed char)70;
signed char var_13 = (signed char)-127;
signed char var_15 = (signed char)47;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)111;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
