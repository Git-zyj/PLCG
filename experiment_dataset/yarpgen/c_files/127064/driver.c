#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_8 = (signed char)-47;
unsigned long long int var_10 = 2131009926590629452ULL;
signed char var_14 = (signed char)-80;
unsigned long long int var_16 = 15295006140315152158ULL;
signed char var_18 = (signed char)-73;
int zero = 0;
long long int var_20 = 973240932725232050LL;
unsigned char var_21 = (unsigned char)149;
void init() {
}

void checksum() {
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
