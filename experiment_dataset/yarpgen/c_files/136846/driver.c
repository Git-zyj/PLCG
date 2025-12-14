#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)19631;
unsigned char var_3 = (unsigned char)129;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)52798;
unsigned long long int var_9 = 10102027588686574949ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_16 = 6095684499636237189LL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
