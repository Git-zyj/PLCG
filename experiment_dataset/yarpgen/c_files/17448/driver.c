#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23748;
_Bool var_4 = (_Bool)0;
long long int var_8 = -5959105344535085470LL;
long long int var_12 = 5015127772059796147LL;
unsigned char var_13 = (unsigned char)162;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 9388780753398413317ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1556140553868908729ULL;
int var_20 = 1257924280;
_Bool var_21 = (_Bool)1;
long long int var_22 = 7494649346454348413LL;
unsigned short arr_2 [16] ;
int arr_5 [16] [16] ;
long long int arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)16909;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -390444694;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = -1471923623208185577LL;
}

void checksum() {
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
