#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1078601050;
unsigned int var_3 = 4181458474U;
int var_4 = -489105205;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 10859131734856593874ULL;
short var_12 = (short)-5366;
int var_13 = -1567036586;
long long int var_16 = 8587866439686398829LL;
unsigned long long int var_18 = 16474930539949161291ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)54735;
long long int var_21 = 5995426859954335062LL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
