#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)49347;
unsigned short var_14 = (unsigned short)15140;
long long int var_15 = 4005197804311885665LL;
int zero = 0;
unsigned int var_16 = 2902935977U;
unsigned int var_17 = 586503352U;
unsigned long long int var_18 = 9445268676637866071ULL;
unsigned long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 16169657872587349987ULL : 12163242576240003272ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
