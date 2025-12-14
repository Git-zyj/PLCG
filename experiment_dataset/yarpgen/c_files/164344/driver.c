#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15757952889885018646ULL;
unsigned int var_3 = 242135956U;
int var_4 = -1059832341;
long long int var_5 = 3772031548872311570LL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 861274563U;
unsigned long long int var_8 = 954253418904028093ULL;
unsigned int var_9 = 3622740327U;
unsigned long long int var_11 = 7851170353829623837ULL;
unsigned char var_13 = (unsigned char)177;
long long int var_14 = -780029363104664637LL;
int zero = 0;
short var_17 = (short)-20796;
int var_18 = -18877176;
unsigned long long int var_19 = 12758806687656076027ULL;
unsigned long long int var_20 = 4864936942394093469ULL;
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
