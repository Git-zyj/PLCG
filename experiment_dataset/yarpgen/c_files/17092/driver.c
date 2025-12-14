#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4174881836691692187LL;
unsigned char var_7 = (unsigned char)174;
short var_8 = (short)-25778;
long long int var_11 = 6463874149158102553LL;
unsigned char var_12 = (unsigned char)31;
int zero = 0;
signed char var_18 = (signed char)-66;
short var_19 = (short)-32079;
int var_20 = -1310038292;
long long int var_21 = 8271424860133335677LL;
short arr_0 [16] [16] ;
long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-25604;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 8722526125224205477LL;
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
