#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9482837386997631877ULL;
int var_4 = -97955982;
unsigned int var_6 = 921015977U;
int var_7 = -63245633;
unsigned char var_9 = (unsigned char)82;
unsigned int var_11 = 769824516U;
unsigned short var_12 = (unsigned short)13168;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)67;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)99;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
