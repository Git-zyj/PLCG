#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1054074643;
unsigned long long int var_5 = 15432463250304835358ULL;
long long int var_7 = -3876872835665290801LL;
long long int var_8 = 7792669229950427830LL;
_Bool var_9 = (_Bool)0;
int var_10 = -1171661900;
unsigned int var_11 = 815931765U;
int var_13 = 845434216;
int zero = 0;
short var_15 = (short)-20624;
unsigned short var_16 = (unsigned short)10591;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
