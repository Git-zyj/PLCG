#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -280088599;
signed char var_12 = (signed char)-16;
short var_13 = (short)14093;
unsigned long long int var_14 = 9363066334330826838ULL;
int zero = 0;
signed char var_17 = (signed char)-73;
signed char var_18 = (signed char)-42;
long long int var_19 = -2613070433798647859LL;
int var_20 = -332996559;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
