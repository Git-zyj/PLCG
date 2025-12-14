#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)70;
unsigned int var_12 = 1375532171U;
unsigned short var_13 = (unsigned short)42013;
signed char var_17 = (signed char)105;
int zero = 0;
int var_18 = 1727711415;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)20934;
unsigned short var_21 = (unsigned short)42800;
signed char var_22 = (signed char)102;
long long int var_23 = 6334582736660143409LL;
unsigned short var_24 = (unsigned short)35583;
long long int var_25 = 2886705393390747789LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
