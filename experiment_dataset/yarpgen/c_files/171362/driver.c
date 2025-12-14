#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1628517363040444150LL;
unsigned int var_5 = 3772011256U;
_Bool var_6 = (_Bool)0;
long long int var_9 = 7429788421944609826LL;
long long int var_12 = 3831368675781558780LL;
int var_13 = 542229431;
int var_14 = 2062592595;
int zero = 0;
unsigned short var_16 = (unsigned short)6067;
int var_17 = -1138605994;
unsigned short var_18 = (unsigned short)5440;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
