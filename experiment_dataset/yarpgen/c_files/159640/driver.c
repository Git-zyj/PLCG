#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10280897987278284180ULL;
unsigned short var_6 = (unsigned short)62447;
signed char var_7 = (signed char)-54;
unsigned long long int var_9 = 6847533695157872396ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)37786;
signed char var_12 = (signed char)98;
signed char var_13 = (signed char)-42;
unsigned short var_14 = (unsigned short)29649;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 17295907389655372758ULL : 11321679119529854759ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2421037286239869996ULL : 2712411782581650309ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
