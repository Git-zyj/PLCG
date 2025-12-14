#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32402;
unsigned char var_4 = (unsigned char)212;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 3378540861827682850ULL;
long long int var_11 = 2417981977619336443LL;
unsigned short var_12 = (unsigned short)40516;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
