#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1344463564;
unsigned int var_7 = 4018365418U;
unsigned int var_8 = 3587940779U;
int zero = 0;
signed char var_14 = (signed char)-24;
unsigned int var_15 = 1486323219U;
_Bool var_16 = (_Bool)1;
int var_17 = -890508572;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
