#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31896;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-22202;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-26;
int var_9 = 991101772;
unsigned long long int var_10 = 2197995532556161348ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 14536129805389997344ULL;
short var_13 = (short)-15194;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_19 = (short)436;
signed char var_20 = (signed char)64;
unsigned short var_21 = (unsigned short)3050;
unsigned short var_22 = (unsigned short)22878;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
