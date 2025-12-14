#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2458911654252707508LL;
signed char var_3 = (signed char)55;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 12440392716277692747ULL;
long long int var_9 = -2245232873989445318LL;
int zero = 0;
signed char var_12 = (signed char)89;
unsigned int var_13 = 3409537756U;
unsigned short var_14 = (unsigned short)41700;
long long int var_15 = 7157385621414012005LL;
unsigned short var_16 = (unsigned short)19431;
unsigned long long int var_17 = 7009912611373064841ULL;
unsigned short arr_0 [19] ;
long long int arr_1 [19] [19] ;
unsigned char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61687 : (unsigned short)16825;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 54768604204239386LL : 74883862484393471LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)255;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
