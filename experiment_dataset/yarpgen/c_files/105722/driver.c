#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3897541204462100542LL;
unsigned short var_2 = (unsigned short)17364;
unsigned int var_3 = 1009563781U;
unsigned short var_4 = (unsigned short)39154;
int var_5 = 353723349;
unsigned char var_7 = (unsigned char)146;
unsigned short var_9 = (unsigned short)33596;
int zero = 0;
long long int var_10 = 2016441336774922652LL;
int var_11 = 719353403;
long long int var_12 = 7581771429481871137LL;
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
