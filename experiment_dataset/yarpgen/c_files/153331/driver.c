#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 656350598U;
unsigned short var_5 = (unsigned short)39814;
unsigned long long int var_10 = 14180811483999039682ULL;
unsigned int var_11 = 2558642194U;
unsigned int var_17 = 3449431803U;
int zero = 0;
int var_20 = 1310238437;
long long int var_21 = -2059187066390295984LL;
long long int var_22 = 696362457568324939LL;
signed char var_23 = (signed char)-25;
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
