#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
unsigned char var_2 = (unsigned char)191;
int var_8 = -322151084;
long long int var_9 = -7833219536585254141LL;
int zero = 0;
unsigned char var_10 = (unsigned char)103;
unsigned char var_11 = (unsigned char)255;
int var_12 = -1996876430;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
