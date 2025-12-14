#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)184;
_Bool var_2 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_9 = 4754376269680189548LL;
unsigned char var_10 = (unsigned char)0;
short var_11 = (short)14217;
unsigned short var_12 = (unsigned short)56375;
long long int var_13 = 813879525203275040LL;
int zero = 0;
long long int var_14 = -3450315287704677051LL;
long long int var_15 = 3613472163202537721LL;
unsigned long long int var_16 = 14289994692568392890ULL;
long long int var_17 = -6259549683660728911LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
