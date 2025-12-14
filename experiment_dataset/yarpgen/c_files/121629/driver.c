#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4472366728326596319LL;
signed char var_2 = (signed char)-96;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 2613737726U;
unsigned short var_6 = (unsigned short)11309;
int var_7 = -479660384;
signed char var_12 = (signed char)38;
unsigned int var_14 = 3843248021U;
unsigned short var_15 = (unsigned short)60654;
int zero = 0;
int var_16 = -2066607875;
unsigned short var_17 = (unsigned short)19748;
unsigned int var_18 = 4232691342U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
