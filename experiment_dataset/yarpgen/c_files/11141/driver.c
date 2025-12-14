#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16566509241973089619ULL;
signed char var_2 = (signed char)-99;
short var_3 = (short)-19081;
short var_4 = (short)7139;
unsigned char var_5 = (unsigned char)126;
short var_7 = (short)-519;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 4225834455U;
int zero = 0;
int var_11 = -145129585;
unsigned long long int var_12 = 14582377969860582902ULL;
long long int var_13 = -5192950439686559560LL;
unsigned char var_14 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
