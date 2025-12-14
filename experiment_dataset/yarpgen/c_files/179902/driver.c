#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4937006248358458976LL;
signed char var_1 = (signed char)0;
_Bool var_5 = (_Bool)1;
long long int var_9 = 4713969332016009019LL;
int zero = 0;
unsigned short var_16 = (unsigned short)17320;
unsigned char var_17 = (unsigned char)46;
short var_18 = (short)24206;
long long int var_19 = -6323268625238002409LL;
long long int var_20 = 8104287164241948644LL;
unsigned long long int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1168647953723408228ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
