#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)30152;
_Bool var_4 = (_Bool)0;
short var_6 = (short)15334;
unsigned int var_7 = 824786076U;
short var_8 = (short)-3489;
long long int var_9 = 234004172851478417LL;
unsigned int var_10 = 2375514796U;
unsigned int var_12 = 1415075773U;
int zero = 0;
unsigned int var_13 = 1818974457U;
unsigned int var_14 = 4040493961U;
signed char var_15 = (signed char)-115;
unsigned int var_16 = 850765191U;
unsigned long long int var_17 = 18341854528964225585ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
