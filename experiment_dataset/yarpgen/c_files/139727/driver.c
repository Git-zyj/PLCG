#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1055028250U;
long long int var_2 = 1266621120995233329LL;
int var_3 = -1902396032;
signed char var_5 = (signed char)28;
long long int var_7 = -7849198874322112446LL;
signed char var_8 = (signed char)-41;
unsigned int var_9 = 1049911202U;
unsigned int var_10 = 3895463941U;
int zero = 0;
long long int var_11 = -3319746130255668763LL;
long long int var_12 = 632354094297724559LL;
unsigned int var_13 = 3608835512U;
unsigned int var_14 = 131049713U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
