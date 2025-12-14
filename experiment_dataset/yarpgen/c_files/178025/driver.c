#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)205;
short var_2 = (short)-32571;
signed char var_3 = (signed char)-16;
int var_8 = 1374086867;
_Bool var_11 = (_Bool)1;
unsigned char var_17 = (unsigned char)27;
int zero = 0;
unsigned long long int var_20 = 15934376283736045279ULL;
unsigned int var_21 = 3409608803U;
unsigned int var_22 = 1182073081U;
unsigned int var_23 = 1574359391U;
void init() {
}

void checksum() {
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
