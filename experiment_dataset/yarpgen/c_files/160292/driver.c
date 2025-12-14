#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16025707049420374961ULL;
unsigned long long int var_3 = 715014332031248268ULL;
long long int var_4 = 8051548964791024563LL;
unsigned short var_7 = (unsigned short)11751;
int var_10 = 1044907221;
unsigned char var_11 = (unsigned char)16;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 12467391;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
