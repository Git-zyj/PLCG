#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
long long int var_4 = 5074890918832146369LL;
_Bool var_6 = (_Bool)1;
long long int var_8 = -1043238152077652547LL;
long long int var_11 = 6890864304761414157LL;
int zero = 0;
long long int var_15 = 2892652806258601128LL;
unsigned long long int var_16 = 1415236856211417031ULL;
unsigned long long int var_17 = 12513792067512434510ULL;
signed char var_18 = (signed char)40;
unsigned short var_19 = (unsigned short)3196;
int arr_1 [16] ;
short arr_2 [16] ;
unsigned long long int arr_3 [16] [16] [16] ;
signed char arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1296368399;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-23945;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 13731011776693658282ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-57;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
