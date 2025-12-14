#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8833117932177203383LL;
long long int var_5 = 4196568498476873689LL;
short var_11 = (short)23697;
unsigned char var_13 = (unsigned char)54;
int zero = 0;
unsigned char var_15 = (unsigned char)91;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)12;
signed char var_18 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
