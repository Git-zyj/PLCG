#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -509919623145539769LL;
long long int var_3 = 1543533162925927493LL;
long long int var_4 = 2646823007295594921LL;
long long int var_5 = -2194301009623740882LL;
int var_6 = -239459906;
unsigned char var_8 = (unsigned char)230;
int zero = 0;
long long int var_10 = -1525890322241963097LL;
long long int var_11 = -2745906526497021557LL;
long long int var_12 = -5959517867341528170LL;
long long int var_13 = 1336039396926934093LL;
long long int var_14 = 1337501227968341022LL;
long long int var_15 = 7310181036804172770LL;
long long int var_16 = 7630208984358580216LL;
long long int arr_0 [22] ;
int arr_1 [22] ;
long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2009159631615494741LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1641725660;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -6653398546172902227LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
