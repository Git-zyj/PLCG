#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)28;
unsigned long long int var_11 = 961674133542931797ULL;
int var_12 = -1062703180;
short var_16 = (short)23055;
int zero = 0;
long long int var_17 = 1010339742777363496LL;
int var_18 = -1556834739;
int var_19 = 555556568;
long long int var_20 = 7289068956413802252LL;
int var_21 = -1562557013;
long long int var_22 = -9019937554514290841LL;
long long int arr_1 [11] ;
signed char arr_2 [11] ;
unsigned char arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -7213243145884518689LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-102 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)185;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
