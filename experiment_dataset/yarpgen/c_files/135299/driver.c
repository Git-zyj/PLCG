#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1588252128;
unsigned long long int var_13 = 14490041765003600619ULL;
unsigned long long int var_14 = 15828607383564133724ULL;
unsigned short var_15 = (unsigned short)14458;
signed char var_17 = (signed char)41;
short var_18 = (short)274;
int zero = 0;
unsigned int var_20 = 3284953496U;
unsigned char var_21 = (unsigned char)50;
unsigned long long int var_22 = 14932932990688685827ULL;
int var_23 = -963214502;
short var_24 = (short)-29739;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
