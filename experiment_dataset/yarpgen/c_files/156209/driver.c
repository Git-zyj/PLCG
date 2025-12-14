#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15034990454102782884ULL;
unsigned int var_1 = 113774112U;
unsigned long long int var_2 = 12378348620108844373ULL;
unsigned long long int var_3 = 12086074614760199278ULL;
unsigned long long int var_4 = 5300387648909632497ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-19;
int var_8 = -1179420552;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)87;
unsigned int var_11 = 3427658730U;
short var_12 = (short)-26184;
signed char var_13 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
