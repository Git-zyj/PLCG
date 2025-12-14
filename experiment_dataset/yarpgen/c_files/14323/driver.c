#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5731725768543745218LL;
int var_3 = 145407173;
unsigned char var_4 = (unsigned char)252;
int var_6 = -1962104009;
int var_7 = -1030246343;
long long int var_12 = 2124424812355251948LL;
unsigned long long int var_15 = 6960791412940188990ULL;
int zero = 0;
int var_16 = 282182544;
int var_17 = 1536428453;
unsigned long long int var_18 = 12970006958292095905ULL;
unsigned char var_19 = (unsigned char)45;
unsigned long long int var_20 = 17414904709553257267ULL;
unsigned char var_21 = (unsigned char)206;
unsigned char var_22 = (unsigned char)242;
unsigned char var_23 = (unsigned char)129;
unsigned char arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)214;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
