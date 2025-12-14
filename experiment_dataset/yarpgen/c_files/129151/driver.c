#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10628;
unsigned long long int var_2 = 2259414953153915447ULL;
long long int var_4 = -8096064795408149407LL;
short var_5 = (short)26570;
int zero = 0;
long long int var_17 = 4399177451067219528LL;
unsigned char var_18 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
