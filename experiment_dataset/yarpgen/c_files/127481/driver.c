#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18168;
signed char var_2 = (signed char)-58;
int var_4 = -1573187841;
long long int var_6 = -1105036822918890980LL;
unsigned short var_7 = (unsigned short)35898;
unsigned long long int var_8 = 16199744270005041159ULL;
unsigned short var_10 = (unsigned short)52294;
int zero = 0;
long long int var_13 = -5104471320299545278LL;
int var_14 = -799081731;
unsigned int var_15 = 85889222U;
int var_16 = -1894293836;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
