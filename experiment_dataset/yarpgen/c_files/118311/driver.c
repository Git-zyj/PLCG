#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39268;
long long int var_1 = -4856713713969816486LL;
long long int var_8 = -4531642327333910739LL;
int var_10 = -1711326957;
unsigned long long int var_11 = 17019535892172985256ULL;
signed char var_12 = (signed char)42;
unsigned short var_14 = (unsigned short)54760;
int zero = 0;
signed char var_15 = (signed char)22;
int var_16 = -1505033368;
int var_17 = -430509755;
unsigned int var_18 = 1648463896U;
unsigned int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3454963118U : 2562349467U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
