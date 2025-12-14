#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)151;
unsigned long long int var_3 = 15406485688817933506ULL;
int var_4 = -310853290;
unsigned long long int var_6 = 18282336088672670731ULL;
unsigned int var_7 = 1606513530U;
long long int var_8 = -4289471665583792510LL;
unsigned long long int var_10 = 8120404188071096233ULL;
unsigned long long int var_16 = 13186944379569311397ULL;
unsigned long long int var_18 = 13327338527604012673ULL;
int zero = 0;
unsigned long long int var_19 = 14696069587615333926ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-28139;
unsigned long long int arr_0 [20] ;
long long int arr_1 [20] ;
short arr_2 [20] ;
long long int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 13657557425875150914ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -5172793675948227837LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)3657;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 4297447843554561984LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
