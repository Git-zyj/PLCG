#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)186;
unsigned short var_6 = (unsigned short)5807;
unsigned long long int var_7 = 13998016561067529037ULL;
short var_9 = (short)16022;
unsigned long long int var_11 = 12445424554646150780ULL;
int var_12 = -464486699;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 2993265576331667990LL;
int var_15 = 1920344964;
long long int var_16 = -2789221065082497878LL;
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
