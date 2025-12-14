#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-24;
unsigned long long int var_3 = 5760675374758240859ULL;
unsigned int var_4 = 1832023636U;
signed char var_5 = (signed char)-125;
unsigned char var_7 = (unsigned char)72;
long long int var_13 = 632683425793663275LL;
int zero = 0;
unsigned char var_14 = (unsigned char)191;
unsigned short var_15 = (unsigned short)45129;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
