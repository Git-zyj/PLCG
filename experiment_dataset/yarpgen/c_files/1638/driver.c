#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10856981313401748409ULL;
signed char var_5 = (signed char)-61;
signed char var_9 = (signed char)-122;
int zero = 0;
unsigned char var_11 = (unsigned char)18;
unsigned short var_12 = (unsigned short)60171;
long long int var_13 = 5489805629398742133LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
