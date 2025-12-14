#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19706;
short var_8 = (short)-22419;
short var_9 = (short)-20265;
int var_10 = -1921695782;
unsigned char var_11 = (unsigned char)155;
unsigned long long int var_14 = 8559958091028804167ULL;
int var_16 = -898062530;
int zero = 0;
signed char var_19 = (signed char)-19;
unsigned long long int var_20 = 17809432892581342076ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
