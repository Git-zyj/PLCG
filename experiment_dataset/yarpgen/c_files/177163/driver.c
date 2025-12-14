#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1037939139123680712ULL;
signed char var_2 = (signed char)106;
long long int var_4 = -811340570564569772LL;
signed char var_6 = (signed char)-94;
long long int var_7 = -1721719685761657596LL;
int zero = 0;
unsigned short var_10 = (unsigned short)25646;
int var_11 = -1931194149;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
