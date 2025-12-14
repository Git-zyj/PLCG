#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43174;
unsigned long long int var_2 = 3872934438988465279ULL;
signed char var_3 = (signed char)-102;
int var_5 = 821673683;
short var_6 = (short)-18889;
unsigned short var_7 = (unsigned short)18898;
unsigned long long int var_12 = 11905790296992016532ULL;
int zero = 0;
short var_13 = (short)-12942;
unsigned int var_14 = 2120017021U;
unsigned char var_15 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
