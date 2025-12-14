#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45250;
unsigned long long int var_5 = 5187957325398515927ULL;
unsigned long long int var_6 = 13804342286003573675ULL;
unsigned char var_7 = (unsigned char)86;
unsigned char var_8 = (unsigned char)110;
int zero = 0;
int var_11 = -1216392178;
unsigned char var_12 = (unsigned char)101;
void init() {
}

void checksum() {
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
