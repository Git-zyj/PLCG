#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9087872488742842442LL;
unsigned short var_7 = (unsigned short)50173;
unsigned long long int var_11 = 1198756755723613401ULL;
signed char var_12 = (signed char)-17;
_Bool var_16 = (_Bool)1;
long long int var_18 = 185730135841852369LL;
int zero = 0;
unsigned long long int var_20 = 15658575831276885464ULL;
short var_21 = (short)12476;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)45;
unsigned char var_24 = (unsigned char)51;
long long int arr_3 [15] [15] ;
unsigned short arr_5 [15] [15] [15] ;
int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 1317196117453516260LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)17871;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -1848171388;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
