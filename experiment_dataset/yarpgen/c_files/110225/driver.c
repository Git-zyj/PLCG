#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8687293254001007975ULL;
signed char var_3 = (signed char)-34;
unsigned char var_4 = (unsigned char)164;
unsigned int var_7 = 3812657681U;
signed char var_12 = (signed char)17;
unsigned long long int var_13 = 862857431402308831ULL;
unsigned short var_18 = (unsigned short)50051;
int zero = 0;
unsigned long long int var_19 = 8083425222336506039ULL;
unsigned int var_20 = 2389197638U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
