#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
int var_1 = -850084827;
signed char var_2 = (signed char)-126;
_Bool var_4 = (_Bool)1;
long long int var_6 = -1158274496071091876LL;
long long int var_7 = -5863778044118088183LL;
int zero = 0;
int var_10 = 887916086;
unsigned short var_11 = (unsigned short)46880;
unsigned short var_12 = (unsigned short)4452;
int var_13 = 608207838;
unsigned long long int var_14 = 17407014884037947169ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
