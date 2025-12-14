#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2185871188U;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)49;
short var_3 = (short)-5970;
short var_5 = (short)12708;
signed char var_7 = (signed char)35;
signed char var_8 = (signed char)32;
signed char var_9 = (signed char)-97;
_Bool var_10 = (_Bool)1;
short var_12 = (short)28552;
_Bool var_13 = (_Bool)0;
short var_15 = (short)31791;
signed char var_17 = (signed char)-105;
int zero = 0;
unsigned int var_18 = 1283923095U;
short var_19 = (short)-22816;
unsigned int var_20 = 1357911203U;
short var_21 = (short)-14809;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
