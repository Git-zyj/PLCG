#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2008799306;
unsigned char var_2 = (unsigned char)208;
unsigned short var_3 = (unsigned short)16212;
long long int var_4 = -5979170036774675925LL;
unsigned long long int var_5 = 1707140487918260405ULL;
unsigned short var_7 = (unsigned short)28252;
short var_9 = (short)-4755;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
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
