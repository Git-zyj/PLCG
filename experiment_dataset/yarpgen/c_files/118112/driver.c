#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 10777755906811098019ULL;
unsigned char var_13 = (unsigned char)180;
unsigned short var_14 = (unsigned short)46816;
unsigned long long int var_19 = 11814603953416904465ULL;
int zero = 0;
short var_20 = (short)5236;
unsigned short var_21 = (unsigned short)12402;
unsigned long long int var_22 = 4991647949924307631ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
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
