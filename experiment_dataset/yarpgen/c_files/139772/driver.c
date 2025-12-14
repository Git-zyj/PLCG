#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1893059645;
unsigned char var_5 = (unsigned char)115;
unsigned short var_8 = (unsigned short)34854;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)150;
int var_15 = -1721422147;
unsigned short var_16 = (unsigned short)43140;
long long int var_17 = 6823247688909042851LL;
long long int var_18 = -4842013764303967042LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
