#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7601350035168629675ULL;
unsigned int var_1 = 3404660756U;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 394958154593573433ULL;
signed char var_6 = (signed char)-79;
int var_7 = -135117965;
int var_9 = 531241019;
long long int var_10 = -2546967001211858528LL;
unsigned char var_11 = (unsigned char)246;
int zero = 0;
short var_12 = (short)-4986;
unsigned int var_13 = 2644415294U;
unsigned char var_14 = (unsigned char)222;
long long int var_15 = 2495611645970508732LL;
long long int var_16 = 903070939223952325LL;
int var_17 = -1989917533;
unsigned char var_18 = (unsigned char)152;
signed char var_19 = (signed char)33;
long long int var_20 = -1476372965562110163LL;
long long int var_21 = 8986577196583043889LL;
unsigned int var_22 = 3653176182U;
long long int var_23 = -6449103861975027905LL;
int arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = -1925488940;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
