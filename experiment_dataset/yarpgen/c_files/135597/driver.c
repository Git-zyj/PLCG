#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9966636923169147604ULL;
unsigned short var_1 = (unsigned short)13994;
signed char var_4 = (signed char)-28;
_Bool var_8 = (_Bool)0;
int var_9 = -1709461194;
int zero = 0;
unsigned long long int var_14 = 9026639503902815072ULL;
unsigned int var_15 = 3068283850U;
unsigned short var_16 = (unsigned short)51847;
unsigned int var_17 = 515609022U;
unsigned short var_18 = (unsigned short)36399;
unsigned long long int arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 7955457185694558952ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
