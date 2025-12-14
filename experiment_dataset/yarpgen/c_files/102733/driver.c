#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2057164250;
unsigned char var_3 = (unsigned char)193;
int var_9 = -1532615743;
unsigned short var_10 = (unsigned short)42050;
unsigned char var_15 = (unsigned char)45;
int zero = 0;
unsigned long long int var_17 = 11868414732388745672ULL;
unsigned long long int var_18 = 9789772974217383061ULL;
void init() {
}

void checksum() {
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
