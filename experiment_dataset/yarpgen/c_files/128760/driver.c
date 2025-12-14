#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62241;
_Bool var_2 = (_Bool)1;
long long int var_4 = 8191420499856200517LL;
short var_9 = (short)3344;
int var_10 = 436083993;
int zero = 0;
long long int var_11 = 4118495063028505354LL;
unsigned short var_12 = (unsigned short)24756;
unsigned long long int var_13 = 2543568999148341639ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -3790850217701440471LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
