#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5838813913907137773ULL;
signed char var_4 = (signed char)-110;
short var_7 = (short)8491;
unsigned char var_11 = (unsigned char)0;
int zero = 0;
signed char var_12 = (signed char)-23;
unsigned short var_13 = (unsigned short)9028;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
