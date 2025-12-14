#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)48;
signed char var_9 = (signed char)-3;
unsigned int var_10 = 1409229043U;
unsigned short var_11 = (unsigned short)52344;
short var_15 = (short)15590;
int zero = 0;
unsigned long long int var_18 = 6652063149735699332ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1775686875U;
signed char var_21 = (signed char)80;
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
