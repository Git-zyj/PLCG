#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3562766136861580783LL;
unsigned char var_6 = (unsigned char)42;
int var_7 = 1973715115;
long long int var_9 = 8698344133029297257LL;
signed char var_10 = (signed char)-27;
int zero = 0;
signed char var_11 = (signed char)-23;
signed char var_12 = (signed char)-67;
long long int var_13 = 8604367406426639008LL;
long long int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 7194353020430387844LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 14239377558573701626ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
