#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60553;
short var_4 = (short)31106;
int var_9 = 1828876258;
int var_11 = 464698184;
long long int var_12 = 8181941193679670787LL;
int zero = 0;
unsigned long long int var_17 = 5643305538949706217ULL;
short var_18 = (short)-25076;
unsigned long long int var_19 = 16351696370032729056ULL;
short var_20 = (short)25887;
unsigned long long int var_21 = 182280560327624553ULL;
short var_22 = (short)-20853;
int var_23 = -1456372193;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)37;
unsigned int var_26 = 3508936746U;
unsigned long long int arr_1 [24] ;
long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 4705269572781242191ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -9187716189424405972LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
