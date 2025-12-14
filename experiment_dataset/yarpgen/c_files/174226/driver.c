#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-26334;
short var_8 = (short)17161;
int var_9 = 1006937995;
unsigned long long int var_11 = 7378747120635914310ULL;
int var_12 = 1029265752;
int var_13 = 75015121;
int var_14 = 2037022573;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)32334;
signed char var_17 = (signed char)-44;
signed char var_18 = (signed char)-87;
int var_19 = 1268226532;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
