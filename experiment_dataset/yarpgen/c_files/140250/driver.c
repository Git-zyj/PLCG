#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -595952662239485097LL;
long long int var_2 = 3778649056020859475LL;
long long int var_3 = 6032460724661442298LL;
unsigned char var_5 = (unsigned char)152;
signed char var_6 = (signed char)-102;
unsigned long long int var_8 = 4777296949967381755ULL;
unsigned long long int var_12 = 14475451301395659274ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)154;
unsigned long long int var_14 = 2921639306735705145ULL;
signed char var_15 = (signed char)50;
unsigned int var_16 = 484363325U;
unsigned long long int arr_0 [22] [22] ;
unsigned int arr_1 [22] ;
int arr_2 [22] ;
unsigned int arr_3 [22] ;
unsigned long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 3094920938319693477ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2708811997U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1957754736 : -1355147711;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2043359644U : 4093761814U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 11407507288755358461ULL : 5811475331379464740ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
