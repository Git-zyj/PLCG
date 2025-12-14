#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7156035193527523284LL;
unsigned int var_2 = 3398809884U;
unsigned char var_4 = (unsigned char)191;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_14 = (short)-12806;
long long int var_15 = -543444262321401487LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
