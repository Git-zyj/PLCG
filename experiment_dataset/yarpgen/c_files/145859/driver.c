#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
long long int var_11 = -1809840507065103023LL;
short var_15 = (short)-732;
int zero = 0;
signed char var_18 = (signed char)6;
unsigned int var_19 = 459723612U;
unsigned short var_20 = (unsigned short)66;
unsigned int var_21 = 3970424993U;
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
