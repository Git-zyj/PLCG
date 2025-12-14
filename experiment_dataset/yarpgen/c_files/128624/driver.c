#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 5117098845026059089ULL;
unsigned int var_3 = 714814673U;
unsigned long long int var_5 = 15765490855607862197ULL;
int var_8 = -278352414;
int var_12 = 619464492;
long long int var_14 = -8306173245435260258LL;
long long int var_15 = 2414843855656789407LL;
int zero = 0;
unsigned short var_17 = (unsigned short)40579;
int var_18 = 1353665433;
int var_19 = 1797072501;
unsigned int var_20 = 3696693047U;
int var_21 = -681907850;
unsigned short var_22 = (unsigned short)48949;
int arr_0 [19] ;
unsigned short arr_1 [19] [19] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1812240868;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)11986;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 11114490000779037ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 12350945526849181997ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
