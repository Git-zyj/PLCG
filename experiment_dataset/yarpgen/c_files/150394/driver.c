#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9787;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)27793;
long long int var_6 = -3260835416726459796LL;
unsigned int var_8 = 3358799847U;
unsigned long long int var_12 = 1340415225107915109ULL;
int var_13 = 1323960697;
int zero = 0;
unsigned short var_15 = (unsigned short)20868;
unsigned int var_16 = 1294665513U;
unsigned int var_17 = 957582068U;
unsigned long long int var_18 = 14764526256936660254ULL;
short var_19 = (short)19492;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
