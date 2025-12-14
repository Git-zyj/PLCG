#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-24836;
unsigned int var_9 = 823385902U;
signed char var_12 = (signed char)-4;
_Bool var_15 = (_Bool)0;
int var_17 = 1080683217;
int zero = 0;
short var_20 = (short)-15520;
short var_21 = (short)9092;
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
