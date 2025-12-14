#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
signed char var_1 = (signed char)24;
long long int var_4 = -8797250411481286914LL;
unsigned char var_6 = (unsigned char)164;
signed char var_7 = (signed char)-111;
signed char var_11 = (signed char)-122;
int zero = 0;
signed char var_12 = (signed char)-8;
unsigned long long int var_13 = 14877335743670990984ULL;
_Bool var_14 = (_Bool)1;
int var_15 = -1380271062;
long long int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -7511308820772173730LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
