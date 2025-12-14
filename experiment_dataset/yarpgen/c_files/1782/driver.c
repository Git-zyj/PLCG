#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)9483;
unsigned int var_4 = 3541865167U;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 2508230185U;
int zero = 0;
long long int var_18 = -3937306390144577057LL;
signed char var_19 = (signed char)-84;
signed char var_20 = (signed char)-55;
unsigned int var_21 = 25034528U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
