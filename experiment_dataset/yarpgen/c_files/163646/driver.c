#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)37;
signed char var_3 = (signed char)-23;
long long int var_4 = 4671790277459937238LL;
unsigned int var_5 = 1971819931U;
short var_7 = (short)-24428;
int zero = 0;
short var_12 = (short)29285;
short var_13 = (short)-9828;
long long int var_14 = 1874846369554436918LL;
short var_15 = (short)-15787;
signed char var_16 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
