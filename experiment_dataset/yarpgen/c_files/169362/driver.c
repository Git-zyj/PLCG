#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -288100233;
unsigned long long int var_5 = 7303918342595121711ULL;
unsigned long long int var_7 = 17399295729679972043ULL;
unsigned char var_9 = (unsigned char)219;
unsigned char var_11 = (unsigned char)177;
int zero = 0;
unsigned int var_15 = 1721352257U;
long long int var_16 = 1388879959214382022LL;
int var_17 = 1965594908;
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
