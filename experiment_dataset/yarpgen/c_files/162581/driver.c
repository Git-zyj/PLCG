#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3354;
long long int var_4 = 7481903110136692595LL;
unsigned short var_6 = (unsigned short)3878;
int var_8 = -1412199161;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3523121744U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
