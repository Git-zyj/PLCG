#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11728007763829571069ULL;
int var_5 = -56629407;
short var_6 = (short)-26507;
int var_7 = 895670991;
short var_12 = (short)-21367;
int zero = 0;
unsigned short var_15 = (unsigned short)16004;
unsigned char var_16 = (unsigned char)63;
void init() {
}

void checksum() {
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
