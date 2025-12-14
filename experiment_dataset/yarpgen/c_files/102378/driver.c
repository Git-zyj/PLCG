#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
unsigned long long int var_2 = 11372289264208663948ULL;
unsigned int var_3 = 3226912501U;
int var_4 = -293414183;
unsigned char var_5 = (unsigned char)20;
long long int var_10 = 3846477060750830359LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 6617758688274478812ULL;
unsigned int var_19 = 1987438628U;
_Bool var_20 = (_Bool)0;
int var_21 = -1660161854;
unsigned int arr_2 [18] ;
int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1721966236U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -363500593;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
