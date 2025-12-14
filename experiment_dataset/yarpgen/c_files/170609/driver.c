#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2194;
unsigned long long int var_5 = 18060545942261193673ULL;
short var_7 = (short)9904;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)50;
unsigned long long int var_19 = 13596948280210790106ULL;
long long int var_20 = -5253537656997303446LL;
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
