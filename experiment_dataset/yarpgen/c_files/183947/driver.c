#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)86;
unsigned long long int var_4 = 273200022564631749ULL;
int var_6 = 1040184629;
unsigned short var_8 = (unsigned short)7499;
int var_10 = 947351372;
long long int var_12 = -8400345316811658590LL;
unsigned long long int var_15 = 17556638146851811728ULL;
int zero = 0;
signed char var_17 = (signed char)-41;
int var_18 = 898294031;
long long int var_19 = -8735286586213216250LL;
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
