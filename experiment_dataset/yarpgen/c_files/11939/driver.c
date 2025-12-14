#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)13688;
unsigned short var_7 = (unsigned short)56385;
unsigned int var_12 = 1146973760U;
short var_17 = (short)17967;
int zero = 0;
signed char var_18 = (signed char)25;
long long int var_19 = 1136386959100259386LL;
unsigned int var_20 = 4280835445U;
short var_21 = (short)19884;
signed char var_22 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
