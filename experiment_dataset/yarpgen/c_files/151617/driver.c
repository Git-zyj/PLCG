#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1432359788;
unsigned char var_2 = (unsigned char)103;
unsigned long long int var_4 = 10695627829915138335ULL;
unsigned long long int var_5 = 14520847895100984927ULL;
unsigned short var_10 = (unsigned short)22471;
unsigned char var_15 = (unsigned char)13;
int zero = 0;
unsigned long long int var_18 = 5845790838897778922ULL;
int var_19 = -1391159300;
short var_20 = (short)-10370;
unsigned long long int var_21 = 8634047872384963750ULL;
unsigned char var_22 = (unsigned char)181;
int var_23 = 667637674;
unsigned long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1413368173053367476ULL;
}

void checksum() {
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
