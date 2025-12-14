#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -341019441;
short var_3 = (short)-19964;
long long int var_10 = -4948768936110077200LL;
signed char var_13 = (signed char)104;
unsigned short var_16 = (unsigned short)40230;
signed char var_19 = (signed char)52;
int zero = 0;
signed char var_20 = (signed char)57;
unsigned long long int var_21 = 3987979330522595039ULL;
unsigned short var_22 = (unsigned short)27535;
signed char var_23 = (signed char)-105;
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
