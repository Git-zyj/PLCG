#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
int var_4 = -1434896935;
unsigned long long int var_5 = 7929871442528945079ULL;
long long int var_6 = -2469042429913954471LL;
unsigned long long int var_7 = 15906975549653647692ULL;
unsigned long long int var_8 = 18017961210089426417ULL;
unsigned char var_9 = (unsigned char)21;
int zero = 0;
unsigned long long int var_14 = 4733568663214033054ULL;
unsigned long long int var_15 = 13021118029337953295ULL;
long long int var_16 = 905606695719042268LL;
unsigned long long int var_17 = 792966114591522456ULL;
unsigned char arr_0 [25] ;
unsigned long long int arr_1 [25] ;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2867500225559720202ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 657508055 : 460364966;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
