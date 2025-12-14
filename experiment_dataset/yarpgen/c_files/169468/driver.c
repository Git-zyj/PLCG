#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1735069754;
unsigned int var_5 = 3045493270U;
unsigned long long int var_13 = 15035626898868561856ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)45568;
short var_18 = (short)-27659;
short var_19 = (short)1540;
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
