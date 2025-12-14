#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6373721271243975919LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)9;
short var_18 = (short)-16729;
int zero = 0;
unsigned char var_20 = (unsigned char)64;
unsigned long long int var_21 = 9865899275365270036ULL;
int var_22 = -538162053;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
