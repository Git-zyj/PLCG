#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
unsigned long long int var_3 = 525765377807144753ULL;
unsigned char var_4 = (unsigned char)94;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 1931501655830492043ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)61958;
unsigned long long int var_11 = 5587235245987869326ULL;
unsigned char var_12 = (unsigned char)50;
unsigned long long int var_13 = 474497462756295082ULL;
long long int arr_3 [22] [22] ;
unsigned short arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -2294721130697750197LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)9441;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
