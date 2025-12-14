#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5744;
signed char var_1 = (signed char)13;
signed char var_2 = (signed char)84;
unsigned int var_6 = 3122808711U;
unsigned char var_7 = (unsigned char)197;
signed char var_9 = (signed char)-31;
unsigned long long int var_10 = 3878835691016729799ULL;
unsigned long long int var_13 = 13856487533590989742ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_17 = (short)-6992;
unsigned int var_18 = 95448470U;
unsigned short var_19 = (unsigned short)47839;
_Bool var_20 = (_Bool)1;
int var_21 = 827121193;
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
