#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)255;
long long int var_5 = -7584679037879470337LL;
unsigned long long int var_7 = 16959129460963400412ULL;
unsigned long long int var_8 = 4916081087590750183ULL;
short var_9 = (short)4434;
signed char var_11 = (signed char)69;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)100;
int zero = 0;
long long int var_18 = -6924884873376314860LL;
long long int var_19 = -4751147087373123732LL;
unsigned int var_20 = 3782566101U;
unsigned char arr_0 [12] [12] ;
unsigned long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 7247641749975864314ULL : 1848189970511748719ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
