#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7410393937976893690LL;
unsigned int var_4 = 1740384228U;
signed char var_5 = (signed char)-36;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 4036766099U;
unsigned char var_8 = (unsigned char)146;
unsigned int var_9 = 2262255565U;
_Bool var_12 = (_Bool)0;
long long int var_17 = 1358206417467626079LL;
int zero = 0;
long long int var_19 = -4750953201769263555LL;
unsigned int var_20 = 1000961237U;
unsigned int var_21 = 1630139885U;
unsigned char var_22 = (unsigned char)155;
unsigned char arr_1 [25] ;
unsigned long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 15522194371452758515ULL : 6220493375228526345ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
