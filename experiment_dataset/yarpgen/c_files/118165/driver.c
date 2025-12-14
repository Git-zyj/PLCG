#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1731393526U;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-85;
short var_5 = (short)15726;
unsigned short var_6 = (unsigned short)39782;
int var_7 = 2013111366;
unsigned int var_8 = 2766577836U;
unsigned int var_9 = 3997437801U;
long long int var_13 = 5051339900598040061LL;
signed char var_14 = (signed char)123;
unsigned int var_16 = 2719094176U;
unsigned int var_19 = 3850409008U;
int zero = 0;
long long int var_20 = -2458726442181105641LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 4238917134U;
void init() {
}

void checksum() {
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
