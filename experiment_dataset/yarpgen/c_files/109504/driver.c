#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
unsigned char var_3 = (unsigned char)227;
unsigned char var_4 = (unsigned char)49;
unsigned long long int var_15 = 8555621521892718162ULL;
signed char var_17 = (signed char)43;
int zero = 0;
unsigned short var_19 = (unsigned short)7738;
unsigned char var_20 = (unsigned char)167;
unsigned char var_21 = (unsigned char)161;
long long int var_22 = 5334722595688666851LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
