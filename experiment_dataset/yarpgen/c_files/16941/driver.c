#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-100;
unsigned long long int var_6 = 8782201233255760255ULL;
int var_7 = -975414453;
long long int var_9 = -8042014554107666493LL;
long long int var_10 = 6110197766762611134LL;
signed char var_12 = (signed char)-119;
int zero = 0;
signed char var_13 = (signed char)46;
long long int var_14 = 4666804525260924342LL;
unsigned short var_15 = (unsigned short)26588;
void init() {
}

void checksum() {
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
