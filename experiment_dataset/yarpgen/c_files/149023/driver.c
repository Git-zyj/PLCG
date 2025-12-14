#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)231;
long long int var_5 = -755279171649604400LL;
long long int var_6 = 1711860267986104069LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)6659;
unsigned short var_10 = (unsigned short)36157;
unsigned long long int var_11 = 9943312464426302548ULL;
short var_12 = (short)-17717;
_Bool var_14 = (_Bool)1;
int var_18 = -508079688;
int zero = 0;
unsigned short var_20 = (unsigned short)8747;
short var_21 = (short)-18596;
void init() {
}

void checksum() {
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
