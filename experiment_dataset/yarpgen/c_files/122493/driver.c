#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6356996206804604704LL;
int var_1 = 1935519381;
signed char var_3 = (signed char)92;
unsigned char var_9 = (unsigned char)237;
unsigned short var_12 = (unsigned short)39972;
unsigned short var_13 = (unsigned short)12771;
short var_14 = (short)25185;
int zero = 0;
signed char var_17 = (signed char)125;
unsigned long long int var_18 = 16427955686212298296ULL;
unsigned int var_19 = 2944466005U;
unsigned char var_20 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
