#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 870160380575512745ULL;
short var_3 = (short)-11962;
unsigned long long int var_4 = 6646973514635890583ULL;
short var_5 = (short)-20865;
short var_7 = (short)22369;
unsigned long long int var_8 = 1392692277804138712ULL;
unsigned int var_11 = 1264631906U;
int zero = 0;
short var_12 = (short)3159;
unsigned int var_13 = 970278043U;
short var_14 = (short)-6795;
unsigned int var_15 = 3788522215U;
unsigned int var_16 = 3895204273U;
short arr_0 [12] [12] ;
unsigned long long int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-19287;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 12611268857021043923ULL;
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
