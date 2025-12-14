#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)23;
short var_3 = (short)12852;
unsigned long long int var_4 = 558764077180976427ULL;
signed char var_5 = (signed char)-51;
unsigned long long int var_6 = 4714800421313782143ULL;
unsigned long long int var_7 = 9086321240642484339ULL;
unsigned char var_8 = (unsigned char)212;
short var_14 = (short)1177;
int zero = 0;
signed char var_15 = (signed char)19;
signed char var_16 = (signed char)8;
signed char var_17 = (signed char)-28;
unsigned long long int var_18 = 9055897890295250983ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
