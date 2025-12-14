#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1436145616U;
int var_3 = 899848267;
unsigned short var_4 = (unsigned short)24506;
unsigned long long int var_5 = 8268460069518539355ULL;
signed char var_9 = (signed char)110;
signed char var_11 = (signed char)-15;
unsigned long long int var_14 = 9735237381309009335ULL;
int zero = 0;
long long int var_18 = 5481498386882578099LL;
signed char var_19 = (signed char)13;
void init() {
}

void checksum() {
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
