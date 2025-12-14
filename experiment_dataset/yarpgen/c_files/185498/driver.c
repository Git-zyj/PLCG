#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
long long int var_8 = 7287578614179172660LL;
long long int var_11 = 1957753747581539291LL;
unsigned char var_13 = (unsigned char)228;
long long int var_14 = 7237917681740759666LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1433226987387230036ULL;
unsigned short var_19 = (unsigned short)5436;
unsigned short var_20 = (unsigned short)18936;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
