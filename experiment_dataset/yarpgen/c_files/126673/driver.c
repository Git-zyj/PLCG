#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2378670361335108483ULL;
unsigned long long int var_4 = 9455902006601279152ULL;
signed char var_7 = (signed char)102;
signed char var_9 = (signed char)-114;
signed char var_10 = (signed char)13;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-89;
int zero = 0;
signed char var_15 = (signed char)-59;
short var_16 = (short)-6803;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
