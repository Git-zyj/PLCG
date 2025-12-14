#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30671;
unsigned long long int var_5 = 5822525203065958639ULL;
unsigned long long int var_7 = 15761270442957336377ULL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-27080;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 3098499933327634072ULL;
short var_14 = (short)25568;
unsigned long long int var_15 = 3702220745630066604ULL;
short var_16 = (short)-6647;
unsigned long long int arr_2 [24] ;
unsigned long long int arr_4 [24] ;
short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 12345796949584542364ULL : 17182858090272838762ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1334169656807612524ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-14291 : (short)-32613;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
