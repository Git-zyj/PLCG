#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15388370628142055928ULL;
short var_3 = (short)27074;
unsigned char var_6 = (unsigned char)95;
unsigned long long int var_7 = 5418622003016789772ULL;
unsigned long long int var_9 = 12953274672845740206ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)48;
int zero = 0;
signed char var_16 = (signed char)-109;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-107;
void init() {
}

void checksum() {
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
