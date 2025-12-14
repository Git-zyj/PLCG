#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-98;
unsigned int var_7 = 502514813U;
short var_16 = (short)-19358;
signed char var_19 = (signed char)-15;
int zero = 0;
int var_20 = 867505506;
signed char var_21 = (signed char)-125;
void init() {
}

void checksum() {
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
