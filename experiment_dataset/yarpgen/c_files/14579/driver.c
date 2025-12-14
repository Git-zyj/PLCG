#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55401;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1537258949U;
int var_6 = 1460988227;
_Bool var_7 = (_Bool)0;
int var_8 = 1310389340;
unsigned int var_9 = 4147956004U;
int var_12 = -529804869;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)27650;
unsigned int var_16 = 1916138804U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
