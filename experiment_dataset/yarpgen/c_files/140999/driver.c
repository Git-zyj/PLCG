#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27707;
long long int var_3 = 5489614689770383130LL;
long long int var_4 = 5183542790007789790LL;
long long int var_9 = 2906430279023695639LL;
int zero = 0;
long long int var_16 = -1432197932296254609LL;
signed char var_17 = (signed char)16;
signed char var_18 = (signed char)-95;
unsigned short var_19 = (unsigned short)34605;
long long int arr_0 [12] [12] ;
signed char arr_3 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 4263201496248941498LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-26 : (signed char)-111;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
