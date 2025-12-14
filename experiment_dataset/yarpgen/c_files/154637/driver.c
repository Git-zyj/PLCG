#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -240757487;
unsigned long long int var_2 = 3931192920009350158ULL;
long long int var_3 = 3357517324105126186LL;
unsigned long long int var_6 = 4112595130571115028ULL;
unsigned long long int var_7 = 6519632110031266008ULL;
unsigned long long int var_10 = 37330062237553273ULL;
int zero = 0;
signed char var_12 = (signed char)76;
long long int var_13 = 3231468821611898954LL;
unsigned long long int var_14 = 17406838314127398370ULL;
long long int arr_1 [24] ;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1226098594283817818LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -6477938257408688700LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
