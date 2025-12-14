#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)97;
int var_11 = -1704020147;
unsigned char var_13 = (unsigned char)159;
unsigned long long int var_15 = 15859923293720936439ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)155;
short var_17 = (short)-27190;
unsigned char var_18 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
