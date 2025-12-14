#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1714693980U;
long long int var_4 = -7780630604795981644LL;
long long int var_5 = -8138140846347123319LL;
short var_6 = (short)28064;
signed char var_7 = (signed char)-49;
signed char var_11 = (signed char)-110;
unsigned int var_14 = 2933019541U;
signed char var_15 = (signed char)-55;
short var_16 = (short)29072;
int zero = 0;
int var_20 = 254753976;
signed char var_21 = (signed char)104;
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
