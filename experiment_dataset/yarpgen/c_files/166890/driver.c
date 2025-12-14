#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3944670760U;
unsigned int var_5 = 3825120989U;
long long int var_7 = -469038145648634112LL;
unsigned long long int var_10 = 16729287960041568207ULL;
unsigned long long int var_11 = 2177486645987814987ULL;
unsigned int var_12 = 2597220102U;
unsigned int var_16 = 3669494585U;
long long int var_18 = 5398726318031123946LL;
int zero = 0;
unsigned int var_20 = 584047836U;
unsigned int var_21 = 854834576U;
long long int var_22 = -4239236097816147592LL;
long long int arr_0 [10] ;
long long int arr_1 [10] ;
signed char arr_2 [10] ;
unsigned int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1359045058219542826LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 734088797759540214LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 4024576430U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
