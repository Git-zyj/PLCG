#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14999362077103997599ULL;
unsigned char var_7 = (unsigned char)135;
unsigned long long int var_8 = 5702061346653077947ULL;
int zero = 0;
unsigned long long int var_19 = 819067416664417509ULL;
unsigned long long int var_20 = 1988255610562006149ULL;
void init() {
}

void checksum() {
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
