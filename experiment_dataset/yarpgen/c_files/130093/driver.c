#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52815;
unsigned char var_3 = (unsigned char)190;
unsigned char var_4 = (unsigned char)55;
unsigned long long int var_6 = 1113098711149263691ULL;
signed char var_8 = (signed char)117;
int zero = 0;
unsigned int var_10 = 734864135U;
signed char var_11 = (signed char)97;
unsigned short var_12 = (unsigned short)20416;
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
