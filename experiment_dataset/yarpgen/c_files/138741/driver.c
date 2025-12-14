#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32549;
long long int var_3 = 8740559152812998930LL;
int var_11 = -144869516;
signed char var_13 = (signed char)96;
short var_16 = (short)-17259;
short var_17 = (short)-8102;
int zero = 0;
signed char var_19 = (signed char)-74;
short var_20 = (short)-15586;
signed char var_21 = (signed char)7;
unsigned short var_22 = (unsigned short)51302;
void init() {
}

void checksum() {
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
