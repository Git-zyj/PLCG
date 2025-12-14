#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 4817658904496257246ULL;
unsigned short var_5 = (unsigned short)26100;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2513346173U;
long long int var_8 = -7228913696145224778LL;
int var_9 = -1827625532;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3797984118U;
int var_13 = -1537759976;
unsigned short var_14 = (unsigned short)64955;
short var_15 = (short)-9808;
unsigned long long int var_16 = 3087281595474731745ULL;
int zero = 0;
long long int var_17 = -3199711468098181612LL;
long long int var_18 = 1395274348042629024LL;
int var_19 = 70229235;
_Bool var_20 = (_Bool)1;
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
