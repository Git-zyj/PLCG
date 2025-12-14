#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1829166515;
long long int var_1 = 4941514339856032126LL;
_Bool var_7 = (_Bool)0;
long long int var_10 = 4997638924887581198LL;
int zero = 0;
unsigned char var_11 = (unsigned char)11;
unsigned char var_12 = (unsigned char)97;
unsigned short var_13 = (unsigned short)37096;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
