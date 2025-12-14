#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1415890252;
short var_1 = (short)1921;
unsigned short var_4 = (unsigned short)11790;
short var_9 = (short)14307;
long long int var_10 = -1289658503535130116LL;
int zero = 0;
short var_12 = (short)22508;
long long int var_13 = 3148685016424498575LL;
signed char var_14 = (signed char)-75;
int var_15 = -1834896524;
unsigned short var_16 = (unsigned short)19759;
int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = -1728600627;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
