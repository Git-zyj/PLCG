#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)144;
unsigned char var_2 = (unsigned char)110;
short var_8 = (short)-10424;
unsigned long long int var_9 = 14844645564164748050ULL;
int zero = 0;
short var_11 = (short)-2669;
int var_12 = 487148334;
unsigned long long int var_13 = 17815493274656418374ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
