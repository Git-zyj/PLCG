#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25563;
unsigned int var_4 = 1987057536U;
unsigned char var_7 = (unsigned char)71;
unsigned int var_8 = 3974532562U;
signed char var_9 = (signed char)40;
signed char var_11 = (signed char)-117;
long long int var_12 = 6988273214646929039LL;
int zero = 0;
unsigned short var_13 = (unsigned short)10591;
int var_14 = 729314112;
unsigned long long int var_15 = 8761688889702127224ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
