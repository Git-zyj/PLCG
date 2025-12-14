#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5402530155337475876ULL;
unsigned char var_1 = (unsigned char)125;
unsigned int var_3 = 3205022442U;
unsigned short var_4 = (unsigned short)649;
long long int var_5 = 855025053342642781LL;
long long int var_6 = 6030575447374188003LL;
long long int var_9 = 6233379147132620678LL;
int zero = 0;
long long int var_12 = 6080835135581598340LL;
unsigned short var_13 = (unsigned short)9494;
short var_14 = (short)-23723;
short var_15 = (short)13679;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
