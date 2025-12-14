#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1541922027;
unsigned long long int var_3 = 18300526213803364699ULL;
unsigned long long int var_5 = 4537763651959523447ULL;
int var_7 = -1056731165;
unsigned int var_8 = 1080651270U;
int zero = 0;
unsigned long long int var_19 = 3028589638016407644ULL;
long long int var_20 = -5453790642376199160LL;
unsigned long long int var_21 = 11942547606424408506ULL;
int var_22 = -969528252;
int arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -1798247803;
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
