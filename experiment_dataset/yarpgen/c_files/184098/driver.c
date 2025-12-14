#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)212;
unsigned char var_2 = (unsigned char)64;
short var_3 = (short)4306;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)247;
unsigned char var_9 = (unsigned char)124;
int zero = 0;
unsigned short var_11 = (unsigned short)50114;
long long int var_12 = 1807469251721911395LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
