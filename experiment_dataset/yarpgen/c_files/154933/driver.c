#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
short var_3 = (short)-18886;
unsigned int var_5 = 1992242424U;
int var_10 = -1705291880;
unsigned int var_16 = 3386186595U;
int zero = 0;
short var_18 = (short)-23536;
unsigned long long int var_19 = 918821330499383489ULL;
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
