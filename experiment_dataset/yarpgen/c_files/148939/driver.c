#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 548391232;
int var_4 = -1210384217;
unsigned long long int var_5 = 18270030424925477734ULL;
long long int var_17 = -5736898319235002431LL;
int zero = 0;
unsigned int var_20 = 2358305087U;
signed char var_21 = (signed char)-23;
signed char var_22 = (signed char)126;
unsigned long long int var_23 = 4846148611726494706ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
