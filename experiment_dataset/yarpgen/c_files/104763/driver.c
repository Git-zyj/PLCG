#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3943;
long long int var_3 = -5540004328272250819LL;
unsigned int var_4 = 2539009177U;
unsigned short var_10 = (unsigned short)37458;
unsigned long long int var_11 = 3896136973692717378ULL;
unsigned long long int var_13 = 10007371235823969043ULL;
signed char var_15 = (signed char)-94;
short var_16 = (short)28261;
signed char var_17 = (signed char)-79;
int zero = 0;
unsigned long long int var_18 = 15322948480787022561ULL;
signed char var_19 = (signed char)-96;
unsigned long long int var_20 = 14042823372795094397ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
