#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3561655011347558366LL;
long long int var_8 = -8883981425141877699LL;
long long int var_10 = -4748109029939448914LL;
long long int var_11 = 7239220666742742836LL;
int zero = 0;
long long int var_12 = 5056513529154159544LL;
long long int var_13 = 3928872312974733011LL;
long long int var_14 = 7003608840970863509LL;
long long int var_15 = -5510147398997665496LL;
long long int arr_0 [22] ;
long long int arr_1 [22] ;
long long int arr_4 [13] [13] ;
long long int arr_3 [22] [22] ;
long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1069248891478626382LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -8833496075515753116LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -5828519853219105306LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -6074644392601717955LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -6423497323528461859LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
