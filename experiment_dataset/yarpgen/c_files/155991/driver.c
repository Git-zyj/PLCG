#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8523268743966205549ULL;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-18;
short var_9 = (short)21857;
unsigned short var_10 = (unsigned short)34429;
int zero = 0;
unsigned long long int var_15 = 4074403253373438290ULL;
short var_16 = (short)17710;
unsigned int var_17 = 3195802046U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
