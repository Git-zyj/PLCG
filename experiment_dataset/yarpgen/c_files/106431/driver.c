#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2335428945U;
unsigned char var_10 = (unsigned char)155;
signed char var_11 = (signed char)-29;
signed char var_12 = (signed char)-61;
int zero = 0;
int var_14 = 989040676;
int var_15 = -2009217439;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
