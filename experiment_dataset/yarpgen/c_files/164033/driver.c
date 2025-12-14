#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63628;
unsigned char var_3 = (unsigned char)155;
long long int var_4 = 4487334011557135106LL;
unsigned short var_6 = (unsigned short)35818;
unsigned short var_7 = (unsigned short)58969;
signed char var_8 = (signed char)37;
int var_10 = -1387207607;
int var_11 = -1185039883;
int zero = 0;
long long int var_12 = 4592838539795685645LL;
unsigned long long int var_13 = 13181989464437615357ULL;
void init() {
}

void checksum() {
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
