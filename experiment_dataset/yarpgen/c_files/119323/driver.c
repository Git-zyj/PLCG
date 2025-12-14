#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)113;
short var_13 = (short)17455;
int var_18 = 1505521806;
int zero = 0;
unsigned short var_20 = (unsigned short)17580;
signed char var_21 = (signed char)39;
unsigned int var_22 = 1043175230U;
short var_23 = (short)-24764;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
