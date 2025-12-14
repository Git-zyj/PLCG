#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3623633861932288890ULL;
unsigned long long int var_3 = 14963569121280853229ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)68;
long long int var_8 = 3340191172700407260LL;
unsigned long long int var_9 = 74533595062547755ULL;
unsigned long long int var_10 = 2001342278257172329ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-114;
signed char var_13 = (signed char)-110;
unsigned long long int var_17 = 16243995863299640215ULL;
unsigned long long int var_18 = 5001257854109920106ULL;
int zero = 0;
unsigned long long int var_19 = 7972871347137778083ULL;
unsigned long long int var_20 = 12634566661000989833ULL;
unsigned long long int var_21 = 11078726418409635261ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)105;
unsigned long long int var_24 = 11385780904910685704ULL;
signed char var_25 = (signed char)-2;
unsigned long long int arr_9 [18] [18] [18] [18] [18] [18] ;
signed char arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 15038985786712578607ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-104;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
