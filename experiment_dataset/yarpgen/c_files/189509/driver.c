#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)47751;
unsigned char var_11 = (unsigned char)208;
long long int var_14 = -6052682696523116090LL;
long long int var_15 = -5823403559769355184LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)10;
void init() {
}

void checksum() {
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
