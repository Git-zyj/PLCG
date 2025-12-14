#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-768;
int var_6 = -203914789;
unsigned int var_8 = 2318301120U;
short var_13 = (short)-27439;
int var_15 = -632383338;
unsigned short var_16 = (unsigned short)32713;
unsigned int var_17 = 2128350856U;
int zero = 0;
int var_18 = -371287511;
unsigned int var_19 = 603636330U;
signed char var_20 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
