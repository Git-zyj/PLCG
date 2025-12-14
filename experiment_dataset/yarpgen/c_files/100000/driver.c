#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 258553127U;
unsigned int var_2 = 1034288099U;
unsigned long long int var_3 = 13096241852086599158ULL;
unsigned int var_4 = 3151418902U;
unsigned long long int var_5 = 4330820322681534599ULL;
unsigned long long int var_7 = 15653737438842591755ULL;
unsigned long long int var_8 = 2297448838373571727ULL;
unsigned long long int var_9 = 11976800096514899879ULL;
unsigned long long int var_13 = 13556364100050157227ULL;
unsigned long long int var_14 = 9825325200828113324ULL;
unsigned int var_16 = 2675635040U;
int zero = 0;
unsigned int var_17 = 2988839945U;
unsigned int var_18 = 4063663524U;
unsigned int var_19 = 3167411943U;
unsigned long long int var_20 = 4991248235227644873ULL;
unsigned int var_21 = 2176473020U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
