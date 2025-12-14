#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31565;
short var_1 = (short)-18037;
short var_3 = (short)14916;
unsigned char var_5 = (unsigned char)254;
unsigned char var_6 = (unsigned char)155;
short var_7 = (short)-12188;
unsigned long long int var_8 = 4931732226401394524ULL;
signed char var_9 = (signed char)86;
unsigned long long int var_13 = 13865614986976225519ULL;
int zero = 0;
short var_16 = (short)27790;
short var_17 = (short)9798;
signed char var_18 = (signed char)-125;
unsigned char var_19 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
