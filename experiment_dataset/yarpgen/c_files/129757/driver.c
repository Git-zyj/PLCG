#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3814517481U;
signed char var_3 = (signed char)-12;
unsigned long long int var_8 = 12436436244081212963ULL;
unsigned short var_14 = (unsigned short)64748;
int zero = 0;
unsigned int var_15 = 2641029072U;
short var_16 = (short)-27338;
unsigned int var_17 = 1843174590U;
int var_18 = 1110394690;
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
