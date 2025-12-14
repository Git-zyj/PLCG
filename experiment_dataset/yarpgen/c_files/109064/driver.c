#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40945;
short var_6 = (short)28613;
long long int var_9 = -5994442739823930422LL;
short var_10 = (short)-1170;
unsigned int var_12 = 812250648U;
long long int var_13 = -8133537032453290109LL;
int zero = 0;
int var_14 = -337818312;
short var_15 = (short)32384;
short var_16 = (short)15320;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
