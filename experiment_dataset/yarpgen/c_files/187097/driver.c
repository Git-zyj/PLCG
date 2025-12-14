#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1922810748763381042LL;
long long int var_6 = 1695265878007047546LL;
long long int var_8 = 1762257310860614015LL;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 2901277743U;
unsigned long long int var_14 = 5772175586013768011ULL;
unsigned char var_16 = (unsigned char)6;
int zero = 0;
int var_17 = 1040683788;
unsigned short var_18 = (unsigned short)18997;
long long int var_19 = -6033058302685159432LL;
long long int var_20 = -9185374535538950613LL;
unsigned short arr_0 [17] ;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)19687;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 5314457405386863134LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
