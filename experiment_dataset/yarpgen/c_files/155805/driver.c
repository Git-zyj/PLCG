#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)59;
unsigned char var_3 = (unsigned char)155;
unsigned int var_6 = 527227128U;
unsigned char var_10 = (unsigned char)73;
unsigned int var_11 = 2948980387U;
unsigned int var_12 = 3488512422U;
int zero = 0;
unsigned long long int var_18 = 14202783636813548184ULL;
unsigned long long int var_19 = 10071981025335230037ULL;
unsigned long long int var_20 = 18198535931077947819ULL;
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
