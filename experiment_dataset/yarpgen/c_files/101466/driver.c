#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9099345873387618236ULL;
unsigned long long int var_3 = 10180433398945797268ULL;
int var_9 = -1666572088;
unsigned char var_10 = (unsigned char)38;
unsigned short var_13 = (unsigned short)52429;
int zero = 0;
unsigned short var_14 = (unsigned short)8106;
int var_15 = -674855024;
unsigned long long int var_16 = 14349586050460108406ULL;
int var_17 = -2004876176;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
