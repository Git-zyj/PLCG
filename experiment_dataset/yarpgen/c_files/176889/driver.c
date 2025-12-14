#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_7 = (unsigned char)42;
unsigned long long int var_11 = 14602318813586470578ULL;
int zero = 0;
long long int var_12 = 5242062338137112321LL;
int var_13 = -873617563;
unsigned long long int var_14 = 13870436629519592450ULL;
long long int var_15 = 2286801872292789952LL;
unsigned long long int var_16 = 1346674052198301695ULL;
unsigned long long int var_17 = 14013064490859247583ULL;
_Bool var_18 = (_Bool)1;
int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -698238308;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
