#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
unsigned long long int var_2 = 15371995988088282714ULL;
unsigned int var_6 = 45375298U;
short var_7 = (short)19988;
short var_8 = (short)31937;
unsigned long long int var_9 = 6603543194874751415ULL;
int var_12 = 1312291984;
int var_15 = -1893463723;
int zero = 0;
unsigned long long int var_16 = 8490051538336353127ULL;
unsigned char var_17 = (unsigned char)174;
unsigned int var_18 = 778689309U;
unsigned char var_19 = (unsigned char)60;
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
