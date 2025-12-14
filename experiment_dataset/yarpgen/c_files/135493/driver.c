#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13527145704569245071ULL;
unsigned int var_1 = 960107096U;
int var_6 = 634135403;
unsigned int var_8 = 3077163268U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2251519774U;
signed char var_11 = (signed char)50;
int zero = 0;
unsigned int var_12 = 3013976003U;
unsigned long long int var_13 = 11806828764443563202ULL;
unsigned int var_14 = 4292903174U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
