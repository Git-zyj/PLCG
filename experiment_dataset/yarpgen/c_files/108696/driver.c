#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 239405727U;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)-101;
int var_8 = 1171394106;
int var_9 = -1482798219;
unsigned short var_11 = (unsigned short)17267;
signed char var_12 = (signed char)-81;
unsigned short var_13 = (unsigned short)52003;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)33731;
int zero = 0;
unsigned short var_19 = (unsigned short)19996;
unsigned long long int var_20 = 17749184699048405753ULL;
short var_21 = (short)1785;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
