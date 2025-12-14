#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3977907685580594719ULL;
signed char var_5 = (signed char)109;
unsigned long long int var_6 = 9028508476535594269ULL;
_Bool var_8 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_19 = (short)-1930;
unsigned short var_20 = (unsigned short)27413;
int var_21 = 1543513732;
void init() {
}

void checksum() {
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
