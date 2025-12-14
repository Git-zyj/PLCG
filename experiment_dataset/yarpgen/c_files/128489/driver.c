#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10201450498396058249ULL;
int var_3 = 2028479687;
unsigned short var_4 = (unsigned short)58832;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)11;
int zero = 0;
int var_12 = -850944161;
unsigned short var_13 = (unsigned short)20658;
unsigned int var_14 = 2039070163U;
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
