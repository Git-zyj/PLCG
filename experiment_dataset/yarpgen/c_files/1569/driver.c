#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2365973452U;
long long int var_9 = -8755820333226027403LL;
short var_15 = (short)-3262;
int zero = 0;
unsigned int var_18 = 770777802U;
unsigned char var_19 = (unsigned char)85;
unsigned long long int var_20 = 1937692689203349625ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
