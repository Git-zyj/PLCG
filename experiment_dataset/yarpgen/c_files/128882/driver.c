#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62706;
unsigned int var_3 = 3908802849U;
long long int var_4 = 6393163490739095027LL;
unsigned int var_6 = 1099194933U;
unsigned char var_9 = (unsigned char)70;
unsigned long long int var_10 = 3143650252793748110ULL;
unsigned long long int var_11 = 12273367590096709518ULL;
unsigned int var_14 = 440820935U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)58;
int zero = 0;
unsigned long long int var_19 = 6706306231977809653ULL;
int var_20 = 775204310;
signed char var_21 = (signed char)123;
short var_22 = (short)-15180;
long long int var_23 = -5232634818666859294LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
