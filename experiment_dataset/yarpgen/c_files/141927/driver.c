#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
long long int var_1 = 351211093021336551LL;
unsigned short var_2 = (unsigned short)57151;
int var_3 = 1545370809;
short var_4 = (short)26332;
int var_6 = 82659465;
unsigned long long int var_9 = 5744521020331311531ULL;
int var_11 = -1679904166;
int zero = 0;
signed char var_12 = (signed char)-109;
unsigned long long int var_13 = 8065878065594433143ULL;
unsigned char var_14 = (unsigned char)163;
signed char var_15 = (signed char)19;
long long int var_16 = -3311331669740271662LL;
unsigned long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 9231861629282639932ULL : 9269850976656054044ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
