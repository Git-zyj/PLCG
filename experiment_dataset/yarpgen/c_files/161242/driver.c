#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1540520779U;
signed char var_4 = (signed char)-36;
long long int var_5 = 3002413518118352128LL;
unsigned int var_7 = 2170634449U;
unsigned long long int var_8 = 1633714911988503881ULL;
signed char var_9 = (signed char)-31;
short var_11 = (short)31706;
unsigned int var_12 = 1815079964U;
unsigned int var_13 = 4209399888U;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)166;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)10558;
int var_20 = -1148513485;
unsigned char var_21 = (unsigned char)4;
unsigned int var_22 = 3431361433U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
