#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)75;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)-25;
signed char var_14 = (signed char)-126;
int zero = 0;
signed char var_19 = (signed char)-30;
int var_20 = 52180062;
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
