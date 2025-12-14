#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1723578366;
unsigned int var_3 = 613692974U;
signed char var_4 = (signed char)(-127 - 1);
long long int var_5 = 2805946637112161243LL;
long long int var_7 = 5843121595267270041LL;
unsigned int var_9 = 3550255382U;
int var_11 = -652962730;
int zero = 0;
unsigned short var_12 = (unsigned short)581;
unsigned int var_13 = 2663767283U;
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
