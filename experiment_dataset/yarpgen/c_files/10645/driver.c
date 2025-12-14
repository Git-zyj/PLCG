#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
unsigned char var_4 = (unsigned char)153;
long long int var_5 = -5902658298211609501LL;
unsigned long long int var_6 = 6855334526925526608ULL;
unsigned long long int var_8 = 7069861924428969052ULL;
unsigned short var_9 = (unsigned short)64896;
unsigned char var_10 = (unsigned char)210;
int zero = 0;
unsigned int var_12 = 4269432906U;
signed char var_13 = (signed char)112;
unsigned char var_14 = (unsigned char)67;
int var_15 = 1868727728;
short arr_2 [22] ;
unsigned char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)156;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
