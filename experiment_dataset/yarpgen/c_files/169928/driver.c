#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -774579444;
short var_2 = (short)-5800;
signed char var_6 = (signed char)-33;
_Bool var_8 = (_Bool)0;
int var_9 = -135683848;
short var_10 = (short)18298;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)57864;
signed char var_19 = (signed char)82;
unsigned int var_20 = 805038604U;
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
