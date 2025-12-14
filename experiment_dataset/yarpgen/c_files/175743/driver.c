#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9134994301072144528LL;
unsigned long long int var_5 = 5032713997470889633ULL;
unsigned long long int var_8 = 8876870955072514071ULL;
long long int var_9 = -5015448034231827073LL;
short var_11 = (short)-22383;
int zero = 0;
unsigned short var_12 = (unsigned short)53737;
unsigned long long int var_13 = 18276193295759343421ULL;
long long int var_14 = -606171173832068959LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
