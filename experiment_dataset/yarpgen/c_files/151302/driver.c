#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 6297239904985512572ULL;
int var_6 = 1444783886;
unsigned long long int var_9 = 15559030261408561528ULL;
signed char var_11 = (signed char)-15;
int zero = 0;
unsigned char var_14 = (unsigned char)41;
long long int var_15 = -4923680154480217933LL;
unsigned short var_16 = (unsigned short)51307;
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
