#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2561334551U;
int var_2 = -1191264044;
unsigned long long int var_4 = 6043859043930990698ULL;
unsigned char var_6 = (unsigned char)16;
short var_7 = (short)6346;
unsigned char var_9 = (unsigned char)99;
unsigned int var_11 = 4078346740U;
unsigned long long int var_12 = 5665115520515426985ULL;
int zero = 0;
unsigned int var_13 = 3325677210U;
signed char var_14 = (signed char)-127;
long long int var_15 = -4227861064513727119LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
