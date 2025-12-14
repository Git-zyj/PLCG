#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-75;
unsigned int var_2 = 1416056991U;
int var_4 = -1381345185;
unsigned short var_7 = (unsigned short)10987;
signed char var_8 = (signed char)17;
signed char var_10 = (signed char)49;
signed char var_11 = (signed char)-122;
int zero = 0;
signed char var_12 = (signed char)-19;
int var_13 = 1830104492;
unsigned char var_14 = (unsigned char)53;
unsigned short var_15 = (unsigned short)19411;
signed char var_16 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
