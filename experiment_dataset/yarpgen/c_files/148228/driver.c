#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1127997316100745922LL;
unsigned short var_5 = (unsigned short)37182;
signed char var_6 = (signed char)109;
signed char var_8 = (signed char)44;
unsigned long long int var_9 = 5654185161877452331ULL;
long long int var_11 = 7091515719961031234LL;
unsigned short var_12 = (unsigned short)38464;
unsigned short var_13 = (unsigned short)33031;
signed char var_14 = (signed char)-50;
int zero = 0;
unsigned char var_15 = (unsigned char)255;
short var_16 = (short)-6571;
void init() {
}

void checksum() {
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
