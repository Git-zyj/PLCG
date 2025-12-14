#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-61;
signed char var_6 = (signed char)-55;
unsigned short var_7 = (unsigned short)12417;
int zero = 0;
unsigned long long int var_14 = 8204821551946550054ULL;
short var_15 = (short)-2261;
void init() {
}

void checksum() {
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
