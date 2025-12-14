#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)96;
long long int var_4 = 1902256366467944953LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 856749271306200026ULL;
unsigned long long int var_12 = 6861436291900669453ULL;
unsigned char var_13 = (unsigned char)197;
int zero = 0;
signed char var_18 = (signed char)118;
int var_19 = 198122015;
int var_20 = 1502168414;
_Bool arr_2 [12] ;
int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -618318634 : -1489182749;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
