#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4418;
unsigned char var_3 = (unsigned char)247;
unsigned short var_5 = (unsigned short)44939;
unsigned char var_10 = (unsigned char)243;
long long int var_14 = 8382832105247083492LL;
short var_17 = (short)24060;
int zero = 0;
long long int var_19 = -7786474414113149242LL;
unsigned long long int var_20 = 18126875204446115920ULL;
unsigned int var_21 = 3094631017U;
unsigned int var_22 = 1771062701U;
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
