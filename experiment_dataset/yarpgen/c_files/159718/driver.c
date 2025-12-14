#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 337678916U;
short var_1 = (short)29366;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 3595868267U;
int var_10 = 377473673;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 859666699U;
unsigned char var_18 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
