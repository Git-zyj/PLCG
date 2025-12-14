#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 923568935U;
_Bool var_7 = (_Bool)0;
unsigned short var_13 = (unsigned short)57501;
long long int var_16 = 4517769121400705342LL;
int zero = 0;
unsigned char var_17 = (unsigned char)112;
unsigned int var_18 = 3202571729U;
unsigned short var_19 = (unsigned short)6684;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3043189481U;
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
