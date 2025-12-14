#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-19;
unsigned int var_8 = 3806069167U;
short var_12 = (short)1002;
long long int var_14 = 2673456684702691483LL;
int zero = 0;
unsigned int var_15 = 271043228U;
signed char var_16 = (signed char)116;
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
