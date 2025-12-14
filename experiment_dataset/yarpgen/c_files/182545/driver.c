#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1197593709;
long long int var_1 = 2696532863013227875LL;
unsigned long long int var_3 = 13808977380073475830ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1847216029U;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)140;
unsigned int var_16 = 3064478313U;
long long int var_18 = 247516473407831172LL;
int var_19 = -1542176337;
int zero = 0;
unsigned short var_20 = (unsigned short)60294;
long long int var_21 = -3435773594879097294LL;
long long int var_22 = -8759447983453661219LL;
unsigned short var_23 = (unsigned short)4620;
unsigned short var_24 = (unsigned short)36226;
unsigned long long int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 122031048941274924ULL;
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
