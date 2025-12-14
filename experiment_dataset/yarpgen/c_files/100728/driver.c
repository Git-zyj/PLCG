#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 516422228643513324ULL;
unsigned int var_2 = 3912601653U;
unsigned long long int var_3 = 2519533075837157079ULL;
unsigned char var_6 = (unsigned char)83;
long long int var_7 = 125486159284015228LL;
unsigned long long int var_8 = 3884623692455500209ULL;
short var_9 = (short)-13055;
unsigned char var_10 = (unsigned char)130;
signed char var_11 = (signed char)-82;
int zero = 0;
unsigned char var_12 = (unsigned char)88;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 5684766716689836444ULL;
unsigned short var_15 = (unsigned short)13317;
unsigned int var_16 = 946527373U;
long long int var_17 = -2905108235456074166LL;
unsigned char arr_5 [23] [23] ;
_Bool arr_6 [23] ;
int arr_7 [23] [23] ;
long long int arr_4 [22] ;
long long int arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -482505574;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -3793284935897906964LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = -5831217667259434492LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
