#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2213;
unsigned int var_3 = 1243657105U;
unsigned long long int var_5 = 10921738003756932506ULL;
signed char var_7 = (signed char)6;
int var_8 = -217590554;
int var_9 = -1890337829;
unsigned int var_10 = 1246736240U;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1868364702U;
unsigned int var_14 = 1240961959U;
long long int var_15 = -1754675967828573435LL;
int var_16 = -460559454;
int zero = 0;
long long int var_17 = -342932543062427848LL;
long long int var_18 = 8259084746192599093LL;
unsigned char var_19 = (unsigned char)80;
void init() {
}

void checksum() {
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
