#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)6336;
unsigned short var_6 = (unsigned short)29752;
int var_11 = 915725587;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 6624997677819747791ULL;
long long int var_16 = -5566031313973621524LL;
unsigned char var_17 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
