#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58802;
unsigned short var_5 = (unsigned short)55521;
signed char var_7 = (signed char)-84;
unsigned int var_16 = 2973723639U;
int zero = 0;
int var_18 = 1202921930;
long long int var_19 = -8627469539619762815LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
