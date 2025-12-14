#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-111;
short var_2 = (short)-24929;
unsigned int var_3 = 4292661435U;
_Bool var_6 = (_Bool)0;
long long int var_12 = 7635224052251332879LL;
unsigned int var_15 = 3054685672U;
short var_16 = (short)12181;
int zero = 0;
unsigned int var_19 = 389152618U;
unsigned short var_20 = (unsigned short)52336;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2136953661U;
long long int var_23 = -4355822781045739254LL;
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
