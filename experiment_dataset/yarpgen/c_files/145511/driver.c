#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5199385580604648430LL;
unsigned short var_2 = (unsigned short)32162;
signed char var_3 = (signed char)117;
unsigned long long int var_5 = 12808393524504206457ULL;
long long int var_12 = -7036340554111011061LL;
int zero = 0;
short var_15 = (short)19584;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
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
