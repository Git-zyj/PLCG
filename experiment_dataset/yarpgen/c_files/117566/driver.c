#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2883058918713523607LL;
unsigned long long int var_3 = 3096768737243813865ULL;
long long int var_6 = 7421776658460570227LL;
long long int var_7 = 2521067636086776010LL;
long long int var_8 = 1047917278825483041LL;
unsigned int var_9 = 2019902487U;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)31648;
int zero = 0;
unsigned char var_13 = (unsigned char)134;
int var_14 = 677721625;
int var_15 = -390532088;
long long int var_16 = -3395874825534506865LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
