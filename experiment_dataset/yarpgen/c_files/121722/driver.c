#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-21134;
unsigned int var_3 = 477068314U;
int var_4 = -1059670752;
unsigned int var_5 = 1423187597U;
unsigned short var_12 = (unsigned short)36792;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1473817765065995302LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 6293348049999540349ULL;
short var_19 = (short)28458;
unsigned long long int var_20 = 3776154775675460487ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
