#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4802783016418756573LL;
unsigned char var_1 = (unsigned char)255;
long long int var_4 = 6894497297879307365LL;
long long int var_6 = -6742586848132579829LL;
int var_7 = -1196784788;
unsigned int var_13 = 3072149101U;
int zero = 0;
unsigned long long int var_15 = 6338258011905121401ULL;
int var_16 = -2048203271;
short var_17 = (short)3885;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
