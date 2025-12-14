#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8949496122446698757ULL;
long long int var_4 = 7317796462718810541LL;
int var_8 = -1094676485;
signed char var_9 = (signed char)53;
unsigned short var_13 = (unsigned short)9122;
int zero = 0;
unsigned short var_16 = (unsigned short)62774;
unsigned short var_17 = (unsigned short)3623;
short var_18 = (short)-23702;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)219;
short var_21 = (short)-18655;
unsigned int var_22 = 2745732439U;
short arr_2 [17] [17] [17] ;
unsigned long long int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)5102;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 2482666180685604850ULL;
}

void checksum() {
    hash(&seed, var_16);
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
