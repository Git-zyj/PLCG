#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-48;
signed char var_2 = (signed char)-106;
unsigned int var_3 = 1560798802U;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)32;
unsigned int var_18 = 1130652592U;
unsigned int var_19 = 342688203U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
