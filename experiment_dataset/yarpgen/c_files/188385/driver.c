#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-51;
short var_5 = (short)-22236;
long long int var_7 = -3590678584573513139LL;
unsigned int var_11 = 4176285446U;
short var_12 = (short)29524;
signed char var_16 = (signed char)-41;
int zero = 0;
short var_17 = (short)-30770;
short var_18 = (short)5251;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
