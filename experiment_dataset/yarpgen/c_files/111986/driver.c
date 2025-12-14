#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)78;
unsigned long long int var_6 = 5683346359124860228ULL;
long long int var_7 = 5333890552876600420LL;
unsigned long long int var_9 = 14186993469689799254ULL;
unsigned short var_11 = (unsigned short)45145;
int var_12 = 427296657;
int zero = 0;
signed char var_13 = (signed char)-92;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
