#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58678;
long long int var_6 = -6155598767340808812LL;
unsigned long long int var_9 = 10264769457565957794ULL;
unsigned long long int var_12 = 17399630826899181482ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)13;
long long int var_15 = -7435063231491734080LL;
int var_16 = -218192823;
unsigned long long int var_17 = 6735597005726086709ULL;
int arr_0 [24] ;
long long int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1758323935;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1717227799347825062LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
