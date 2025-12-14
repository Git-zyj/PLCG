#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4061587491U;
unsigned long long int var_4 = 17914520969133047518ULL;
signed char var_5 = (signed char)31;
int var_6 = 321817339;
short var_7 = (short)28163;
unsigned int var_8 = 1023644111U;
unsigned short var_10 = (unsigned short)44683;
long long int var_11 = 7827791075358256761LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)5558;
int var_14 = -264147316;
unsigned int var_15 = 1661230499U;
unsigned int var_16 = 77597020U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
