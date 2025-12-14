#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7959735121601040951ULL;
unsigned int var_1 = 2574310222U;
long long int var_3 = 3816864945640405449LL;
int var_4 = 1384870755;
unsigned char var_7 = (unsigned char)35;
unsigned int var_8 = 3162178335U;
unsigned int var_9 = 297592466U;
int zero = 0;
unsigned int var_10 = 1150257870U;
unsigned int var_11 = 285457730U;
_Bool var_12 = (_Bool)1;
unsigned long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
long long int arr_3 [21] ;
unsigned long long int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 306746140155977244ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 12208079187998650222ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 6061512032110752684LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 2937587636214612479ULL : 9837164375434013962ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
