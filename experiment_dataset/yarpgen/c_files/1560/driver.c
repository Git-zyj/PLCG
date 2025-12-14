#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1321;
unsigned short var_4 = (unsigned short)36259;
unsigned long long int var_6 = 12322305918011067397ULL;
unsigned long long int var_8 = 18411645050218169797ULL;
short var_9 = (short)28750;
signed char var_12 = (signed char)37;
unsigned long long int var_18 = 17843550581437966719ULL;
int zero = 0;
short var_19 = (short)6715;
unsigned int var_20 = 2155078918U;
signed char var_21 = (signed char)-84;
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
