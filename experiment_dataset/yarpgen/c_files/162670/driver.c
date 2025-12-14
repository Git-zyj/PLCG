#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4179541178U;
unsigned short var_1 = (unsigned short)49067;
unsigned short var_5 = (unsigned short)27197;
unsigned short var_6 = (unsigned short)5239;
unsigned short var_7 = (unsigned short)43508;
signed char var_11 = (signed char)40;
unsigned long long int var_12 = 7127274453901553812ULL;
short var_15 = (short)26197;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 897259365;
void init() {
}

void checksum() {
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
