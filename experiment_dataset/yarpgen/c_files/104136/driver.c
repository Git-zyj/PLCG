#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)227;
unsigned char var_3 = (unsigned char)214;
unsigned char var_14 = (unsigned char)69;
int zero = 0;
long long int var_18 = 5351808863190761019LL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -7893652899264181588LL;
unsigned short var_21 = (unsigned short)8191;
long long int arr_1 [23] ;
int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 8673536186862829352LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -972996113;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
