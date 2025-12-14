#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1960539174;
unsigned char var_2 = (unsigned char)179;
unsigned short var_7 = (unsigned short)50170;
unsigned char var_10 = (unsigned char)148;
signed char var_14 = (signed char)102;
int zero = 0;
unsigned short var_16 = (unsigned short)8010;
short var_17 = (short)5630;
unsigned short var_18 = (unsigned short)32249;
unsigned long long int var_19 = 4788081425996532161ULL;
unsigned long long int arr_7 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 8853551526355088380ULL;
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
