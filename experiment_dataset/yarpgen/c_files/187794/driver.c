#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51101;
unsigned short var_8 = (unsigned short)3930;
short var_9 = (short)31954;
unsigned char var_14 = (unsigned char)166;
unsigned int var_15 = 3950301659U;
unsigned long long int var_16 = 13476155479704211465ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)46900;
int var_20 = -1926627106;
unsigned int var_21 = 3516524423U;
unsigned int var_22 = 2299071951U;
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
