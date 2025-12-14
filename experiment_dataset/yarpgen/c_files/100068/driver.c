#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17343378365849795915ULL;
unsigned long long int var_3 = 17075601854605344079ULL;
int var_4 = -1193663854;
unsigned char var_5 = (unsigned char)141;
unsigned short var_6 = (unsigned short)172;
long long int var_7 = 4305578488973239250LL;
unsigned short var_8 = (unsigned short)39235;
signed char var_9 = (signed char)35;
unsigned int var_11 = 1269290279U;
unsigned long long int var_12 = 6424019762793651788ULL;
unsigned int var_13 = 1803538148U;
unsigned int var_14 = 3044399232U;
unsigned int var_15 = 1369787743U;
int zero = 0;
signed char var_16 = (signed char)108;
short var_17 = (short)22763;
short var_18 = (short)-7539;
short var_19 = (short)-27044;
long long int var_20 = 1651029143538604730LL;
long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -6229962916101804145LL : -8078760353820304706LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
