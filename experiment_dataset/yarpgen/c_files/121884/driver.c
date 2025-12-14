#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5299156114366763814LL;
short var_4 = (short)-21753;
signed char var_5 = (signed char)-31;
unsigned long long int var_8 = 13011681954825340373ULL;
int zero = 0;
signed char var_12 = (signed char)-100;
unsigned char var_13 = (unsigned char)177;
unsigned long long int var_14 = 14339354414495875598ULL;
unsigned char var_15 = (unsigned char)89;
unsigned short var_16 = (unsigned short)21759;
long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 8633634370383301956LL;
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
