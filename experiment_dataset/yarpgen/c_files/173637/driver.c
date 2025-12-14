#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6251778867161101128ULL;
unsigned long long int var_6 = 11211119587448798754ULL;
signed char var_8 = (signed char)-113;
unsigned char var_11 = (unsigned char)59;
signed char var_16 = (signed char)-117;
int zero = 0;
short var_19 = (short)-27899;
short var_20 = (short)-1820;
short var_21 = (short)-11024;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
