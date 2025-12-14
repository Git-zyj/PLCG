#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = -1204095796734201679LL;
signed char var_4 = (signed char)94;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_11 = 2901427833323177958LL;
unsigned int var_12 = 287281326U;
int var_13 = 44171725;
int var_14 = -1648522883;
int var_15 = -1225088238;
int zero = 0;
unsigned long long int var_17 = 6872138998937076727ULL;
long long int var_18 = -3420555908048924552LL;
short var_19 = (short)2061;
unsigned short var_20 = (unsigned short)62993;
unsigned int var_21 = 3745088362U;
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
