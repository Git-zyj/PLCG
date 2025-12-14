#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -740039830;
long long int var_2 = -4598286592579138035LL;
unsigned int var_4 = 2005440950U;
unsigned char var_7 = (unsigned char)183;
unsigned long long int var_8 = 10382015260723961565ULL;
_Bool var_14 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)10816;
long long int var_20 = -5631358339221958605LL;
long long int var_21 = 3135074502470316729LL;
unsigned long long int var_22 = 2338122480469863024ULL;
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
