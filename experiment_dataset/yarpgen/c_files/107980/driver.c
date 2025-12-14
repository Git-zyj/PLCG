#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39379;
short var_3 = (short)-2082;
signed char var_4 = (signed char)122;
unsigned long long int var_9 = 15609975336738420361ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)57452;
unsigned long long int var_11 = 1085792452327536391ULL;
long long int var_12 = 6090410202576041187LL;
long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -8254476154351462091LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
