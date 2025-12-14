#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3571479840808233482ULL;
unsigned long long int var_3 = 11217993971341783294ULL;
unsigned short var_4 = (unsigned short)42846;
unsigned char var_11 = (unsigned char)246;
unsigned int var_12 = 2765589684U;
unsigned long long int var_14 = 18104385841593401446ULL;
int var_16 = 1324860731;
int zero = 0;
signed char var_17 = (signed char)110;
int var_18 = 913998699;
unsigned short var_19 = (unsigned short)19384;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
