#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)88;
long long int var_2 = -6511021412799501673LL;
unsigned short var_3 = (unsigned short)34559;
unsigned long long int var_6 = 13346701768898991923ULL;
unsigned int var_8 = 1045720648U;
unsigned char var_10 = (unsigned char)3;
int zero = 0;
unsigned int var_11 = 1368537045U;
unsigned char var_12 = (unsigned char)24;
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
