#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 6624751279303818858ULL;
short var_9 = (short)2404;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 12441293992033987735ULL;
unsigned short var_20 = (unsigned short)61773;
void init() {
}

void checksum() {
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
