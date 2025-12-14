#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30171;
unsigned char var_2 = (unsigned char)152;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-27687;
unsigned char var_10 = (unsigned char)187;
unsigned long long int var_13 = 13000283112140861265ULL;
int zero = 0;
short var_15 = (short)22293;
unsigned long long int var_16 = 1128840491152963853ULL;
short var_17 = (short)-9381;
int var_18 = 1764067465;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
