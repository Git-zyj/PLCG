#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27155;
unsigned short var_1 = (unsigned short)35966;
unsigned long long int var_3 = 8899555054313541811ULL;
signed char var_6 = (signed char)53;
unsigned short var_11 = (unsigned short)36479;
int zero = 0;
short var_12 = (short)-10002;
unsigned long long int var_13 = 7085645769851021216ULL;
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
