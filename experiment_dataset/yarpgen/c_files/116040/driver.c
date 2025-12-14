#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -117507704;
unsigned long long int var_3 = 5097781862581113896ULL;
signed char var_7 = (signed char)76;
signed char var_8 = (signed char)50;
short var_12 = (short)20690;
signed char var_14 = (signed char)-31;
unsigned int var_16 = 1729408612U;
int zero = 0;
unsigned short var_18 = (unsigned short)34436;
short var_19 = (short)24763;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
