#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 8349507897886389135LL;
unsigned short var_6 = (unsigned short)25851;
unsigned int var_9 = 352227186U;
long long int var_11 = -1415118416323276810LL;
long long int var_13 = 1084544762584628797LL;
unsigned short var_14 = (unsigned short)45707;
signed char var_15 = (signed char)94;
unsigned short var_16 = (unsigned short)62919;
int zero = 0;
unsigned short var_20 = (unsigned short)18676;
unsigned char var_21 = (unsigned char)109;
int var_22 = 2079654339;
signed char var_23 = (signed char)57;
long long int var_24 = -5480071124127544384LL;
_Bool arr_0 [21] [21] ;
_Bool arr_3 [21] ;
short arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)23081 : (short)13834;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
