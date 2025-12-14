#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 607457314U;
unsigned long long int var_5 = 3843816637767316856ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)36489;
long long int var_8 = 838771417763906834LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = 1615636906019268383LL;
int zero = 0;
signed char var_11 = (signed char)19;
unsigned char var_12 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
