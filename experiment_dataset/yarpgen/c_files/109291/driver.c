#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6764952780614755079LL;
short var_4 = (short)107;
_Bool var_6 = (_Bool)1;
short var_7 = (short)31215;
unsigned char var_8 = (unsigned char)218;
unsigned long long int var_9 = 17984415585628554186ULL;
short var_12 = (short)-19404;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-23584;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
