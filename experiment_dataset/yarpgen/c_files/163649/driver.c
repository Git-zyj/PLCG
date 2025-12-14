#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1900;
unsigned int var_2 = 1058666859U;
signed char var_6 = (signed char)-22;
unsigned long long int var_7 = 8016146588256373473ULL;
short var_8 = (short)21571;
unsigned int var_9 = 3476808336U;
short var_10 = (short)-13224;
signed char var_12 = (signed char)52;
signed char var_15 = (signed char)-11;
int zero = 0;
unsigned long long int var_17 = 8848682236887401053ULL;
short var_18 = (short)-2359;
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
