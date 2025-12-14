#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)120;
unsigned long long int var_2 = 12999969089326954766ULL;
unsigned char var_3 = (unsigned char)226;
unsigned char var_5 = (unsigned char)141;
unsigned int var_8 = 2108086347U;
unsigned long long int var_10 = 18432958479154488863ULL;
long long int var_12 = -2975337844610420104LL;
unsigned int var_13 = 1182133035U;
long long int var_14 = -5797856619067717491LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3171327881U;
unsigned short var_19 = (unsigned short)10917;
long long int var_20 = 6457193375740144745LL;
unsigned int var_21 = 2098729664U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
