#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
unsigned long long int var_5 = 10513352637613793493ULL;
int var_8 = 275730293;
int var_9 = -1400610825;
signed char var_10 = (signed char)-115;
unsigned long long int var_13 = 14970726079245676840ULL;
int zero = 0;
int var_17 = 1719349866;
unsigned long long int var_18 = 7231735635397683036ULL;
long long int var_19 = 4847671189124326260LL;
unsigned char var_20 = (unsigned char)114;
unsigned long long int var_21 = 6347458378193834433ULL;
unsigned char var_22 = (unsigned char)233;
unsigned long long int arr_0 [16] ;
long long int arr_1 [16] ;
short arr_3 [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3674452465257633275ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -6670446452542202114LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)1055;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
