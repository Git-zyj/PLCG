#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63209;
unsigned int var_2 = 1873316650U;
long long int var_4 = -6650179344601758355LL;
short var_9 = (short)-10284;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 13028088688073711699ULL;
unsigned char var_12 = (unsigned char)121;
int var_13 = 762628919;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
