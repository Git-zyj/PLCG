#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
signed char var_1 = (signed char)-23;
unsigned long long int var_5 = 2196636613356452158ULL;
unsigned long long int var_6 = 17792249858685153369ULL;
signed char var_7 = (signed char)-57;
signed char var_9 = (signed char)-77;
int zero = 0;
long long int var_10 = 3727844355200718232LL;
signed char var_11 = (signed char)-98;
unsigned long long int var_12 = 13532388109096128794ULL;
unsigned long long int var_13 = 9137076066285338018ULL;
long long int var_14 = 50287176439915628LL;
unsigned long long int arr_3 [12] [12] ;
unsigned long long int arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 2591385418774548048ULL : 10362703309065675685ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 3011064339315228208ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
