#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17495;
unsigned short var_5 = (unsigned short)37418;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 4647329406438357628ULL;
long long int var_14 = -5085430745588674274LL;
unsigned short var_19 = (unsigned short)39841;
int zero = 0;
unsigned char var_20 = (unsigned char)95;
unsigned char var_21 = (unsigned char)116;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
