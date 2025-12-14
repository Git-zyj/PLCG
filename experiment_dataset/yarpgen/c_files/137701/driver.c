#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13365620753128543840ULL;
unsigned long long int var_6 = 8606855968028821092ULL;
unsigned long long int var_8 = 14519409174580958287ULL;
unsigned long long int var_10 = 11764324888184680248ULL;
unsigned long long int var_11 = 14437479901937277764ULL;
unsigned long long int var_14 = 10879539951878810131ULL;
int zero = 0;
unsigned long long int var_15 = 13729599491803293932ULL;
unsigned long long int var_16 = 6132123642154255868ULL;
unsigned long long int var_17 = 11728580663176390080ULL;
unsigned long long int var_18 = 18108648574348577231ULL;
unsigned long long int var_19 = 5884610405905576075ULL;
unsigned long long int var_20 = 5643931909343658179ULL;
unsigned long long int var_21 = 843529901563065907ULL;
unsigned long long int var_22 = 329034088197969572ULL;
unsigned long long int var_23 = 3857549804313230501ULL;
unsigned long long int arr_0 [12] [12] ;
unsigned long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 3819037103819249302ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 13186322552702340545ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
