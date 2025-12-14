#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)18590;
unsigned char var_8 = (unsigned char)224;
int var_10 = 1952942015;
int zero = 0;
unsigned short var_11 = (unsigned short)9532;
unsigned long long int var_12 = 441241451797560671ULL;
short var_13 = (short)8841;
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
