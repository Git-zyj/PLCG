#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-55;
unsigned long long int var_7 = 17500569399702191480ULL;
short var_9 = (short)-15915;
unsigned char var_17 = (unsigned char)209;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 1881495890;
void init() {
}

void checksum() {
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
