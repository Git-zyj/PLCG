#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3312106518372815069LL;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)17;
signed char var_13 = (signed char)-121;
int zero = 0;
signed char var_15 = (signed char)-7;
unsigned char var_16 = (unsigned char)77;
signed char var_17 = (signed char)-34;
signed char var_18 = (signed char)73;
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
