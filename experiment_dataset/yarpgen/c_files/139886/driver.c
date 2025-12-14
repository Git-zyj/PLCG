#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6929189735929317524LL;
unsigned int var_4 = 1869752332U;
unsigned int var_6 = 1646228125U;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)53;
unsigned short var_14 = (unsigned short)40585;
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
