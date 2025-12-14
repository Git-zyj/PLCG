#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5543;
short var_5 = (short)13659;
unsigned int var_6 = 4269272605U;
unsigned int var_8 = 873791248U;
signed char var_9 = (signed char)83;
signed char var_11 = (signed char)114;
signed char var_18 = (signed char)-106;
int zero = 0;
unsigned int var_20 = 1785362106U;
int var_21 = -1668210157;
signed char var_22 = (signed char)-95;
unsigned long long int var_23 = 3653027754585120984ULL;
signed char var_24 = (signed char)79;
long long int arr_2 [21] ;
signed char arr_3 [21] ;
signed char arr_6 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 541325301114349692LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-38;
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
