#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16098390945970676442ULL;
unsigned short var_2 = (unsigned short)9778;
short var_4 = (short)-20703;
short var_6 = (short)-31374;
int var_12 = 2136424472;
int zero = 0;
unsigned char var_16 = (unsigned char)193;
short var_17 = (short)-27167;
unsigned char var_18 = (unsigned char)104;
unsigned char var_19 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
