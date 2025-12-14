#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-95;
short var_5 = (short)18192;
unsigned short var_7 = (unsigned short)17362;
_Bool var_8 = (_Bool)0;
short var_9 = (short)23775;
int zero = 0;
unsigned int var_10 = 4075369520U;
unsigned short var_11 = (unsigned short)15616;
unsigned long long int var_12 = 6084576541355136254ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
