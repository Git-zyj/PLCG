#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
signed char var_7 = (signed char)112;
short var_10 = (short)22456;
signed char var_13 = (signed char)-46;
signed char var_15 = (signed char)-69;
int zero = 0;
unsigned long long int var_17 = 5322655103539519517ULL;
unsigned short var_18 = (unsigned short)65004;
int var_19 = -943052448;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
