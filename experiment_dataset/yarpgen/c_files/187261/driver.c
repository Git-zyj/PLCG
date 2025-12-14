#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1934429814;
long long int var_3 = -1555858570110057986LL;
unsigned long long int var_4 = 9768696359378579119ULL;
short var_6 = (short)18679;
unsigned long long int var_8 = 1708678149538085573ULL;
long long int var_9 = -9055804752702790180LL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)62272;
unsigned short var_15 = (unsigned short)776;
int zero = 0;
signed char var_16 = (signed char)40;
short var_17 = (short)3230;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
