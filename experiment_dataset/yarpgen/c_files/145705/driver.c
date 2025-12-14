#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2156757560619771002ULL;
unsigned char var_1 = (unsigned char)220;
short var_3 = (short)32622;
short var_4 = (short)16599;
unsigned char var_8 = (unsigned char)156;
long long int var_9 = 2245136197913390024LL;
int zero = 0;
unsigned char var_11 = (unsigned char)118;
signed char var_12 = (signed char)21;
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
