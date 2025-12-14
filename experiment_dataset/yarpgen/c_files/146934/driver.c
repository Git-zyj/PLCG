#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
signed char var_1 = (signed char)-16;
signed char var_2 = (signed char)-38;
unsigned short var_4 = (unsigned short)45943;
signed char var_7 = (signed char)56;
long long int var_9 = 1283011743977470344LL;
int zero = 0;
long long int var_10 = 4679424923561457208LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)226;
short var_13 = (short)-12800;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
