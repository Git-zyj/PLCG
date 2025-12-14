#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8192666157784796411LL;
unsigned short var_1 = (unsigned short)21463;
int var_2 = 1312741311;
unsigned char var_3 = (unsigned char)161;
unsigned int var_5 = 3999424400U;
unsigned int var_8 = 2601819666U;
long long int var_11 = -3602621559688993999LL;
unsigned char var_13 = (unsigned char)211;
unsigned short var_14 = (unsigned short)19759;
unsigned long long int var_16 = 6121672231349343381ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)50503;
unsigned short var_18 = (unsigned short)29708;
short var_19 = (short)-12441;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
