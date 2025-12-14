#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45372;
unsigned long long int var_1 = 17500289210911763382ULL;
unsigned long long int var_2 = 14561683717131544087ULL;
unsigned short var_3 = (unsigned short)63815;
unsigned char var_5 = (unsigned char)190;
unsigned char var_6 = (unsigned char)198;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)60;
signed char var_11 = (signed char)-77;
short var_12 = (short)30534;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 7618804201249000140ULL;
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
