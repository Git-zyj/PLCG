#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2527748063U;
short var_2 = (short)-6544;
short var_6 = (short)15806;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)16526;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)26180;
long long int var_14 = -2986662249096597597LL;
int zero = 0;
unsigned long long int var_18 = 12448134551015485044ULL;
long long int var_19 = 6469158737520729799LL;
int var_20 = 668914962;
short var_21 = (short)4659;
void init() {
}

void checksum() {
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
