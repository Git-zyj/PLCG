#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-8811;
unsigned long long int var_15 = 15960151752730030484ULL;
int zero = 0;
unsigned long long int var_19 = 15890623731271011138ULL;
unsigned int var_20 = 1572220967U;
unsigned long long int var_21 = 10788171385501094505ULL;
unsigned int var_22 = 4042749087U;
unsigned long long int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3632578350823610158ULL;
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
