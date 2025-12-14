#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61252;
signed char var_2 = (signed char)-96;
int var_7 = -1593712576;
short var_15 = (short)31017;
int zero = 0;
unsigned long long int var_19 = 11319341802149812826ULL;
unsigned short var_20 = (unsigned short)48164;
unsigned long long int var_21 = 193438349824644740ULL;
unsigned long long int var_22 = 16509057942257063139ULL;
unsigned long long int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 4573087847337992103ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
