#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 474481303U;
int var_5 = -257066826;
short var_6 = (short)6595;
signed char var_9 = (signed char)-19;
int zero = 0;
signed char var_12 = (signed char)68;
signed char var_13 = (signed char)-21;
unsigned short var_14 = (unsigned short)40520;
void init() {
}

void checksum() {
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
