#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)1015;
int var_7 = -1940581532;
short var_12 = (short)-20109;
unsigned long long int var_13 = 15800532581600725259ULL;
int var_16 = -694789178;
int zero = 0;
short var_17 = (short)-1097;
unsigned long long int var_18 = 12454044311399095096ULL;
unsigned long long int var_19 = 7682214692066372063ULL;
unsigned char var_20 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
