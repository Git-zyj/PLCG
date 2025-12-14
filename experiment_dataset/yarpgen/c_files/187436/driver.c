#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)29;
unsigned int var_6 = 1639056883U;
_Bool var_7 = (_Bool)1;
int var_9 = 679701553;
unsigned long long int var_13 = 7068974925521332544ULL;
_Bool var_15 = (_Bool)1;
int var_17 = -1489923195;
signed char var_19 = (signed char)-20;
int zero = 0;
int var_20 = -1428559525;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1009589344U;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
