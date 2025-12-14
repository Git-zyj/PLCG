#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17754592626877730066ULL;
unsigned char var_5 = (unsigned char)132;
int zero = 0;
short var_18 = (short)-25517;
unsigned char var_19 = (unsigned char)224;
unsigned long long int var_20 = 2392226989428876178ULL;
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
