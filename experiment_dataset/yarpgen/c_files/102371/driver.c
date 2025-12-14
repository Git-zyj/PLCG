#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 957051048U;
unsigned long long int var_1 = 9551190355253521986ULL;
int var_2 = 1774886345;
long long int var_3 = -2751958369424206119LL;
unsigned long long int var_4 = 2326336270574052144ULL;
int var_5 = -405994360;
short var_7 = (short)27402;
unsigned long long int var_8 = 3908589657830464948ULL;
int var_9 = 237231047;
unsigned int var_10 = 67877099U;
int var_11 = 48906059;
int var_12 = 2119212887;
unsigned char var_13 = (unsigned char)150;
int zero = 0;
unsigned char var_14 = (unsigned char)84;
short var_15 = (short)8235;
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
