#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-94;
unsigned int var_6 = 3956631383U;
signed char var_7 = (signed char)95;
signed char var_8 = (signed char)116;
int zero = 0;
short var_12 = (short)-10304;
int var_13 = 987019510;
short var_14 = (short)-26722;
signed char var_15 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
