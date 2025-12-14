#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)198;
long long int var_8 = -2626515203572155376LL;
unsigned long long int var_12 = 4037717967363453359ULL;
int zero = 0;
long long int var_18 = -8627829474373192297LL;
unsigned char var_19 = (unsigned char)150;
unsigned char var_20 = (unsigned char)230;
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
