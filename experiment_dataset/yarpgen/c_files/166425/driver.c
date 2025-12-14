#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40212;
unsigned long long int var_1 = 3656109323586050653ULL;
unsigned long long int var_4 = 14868441433054925986ULL;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)-56;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)12;
signed char var_14 = (signed char)41;
signed char var_15 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
