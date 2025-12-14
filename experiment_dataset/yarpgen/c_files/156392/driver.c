#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-106;
unsigned short var_4 = (unsigned short)41154;
int var_8 = -1279709622;
unsigned int var_9 = 2491321737U;
unsigned int var_15 = 493452131U;
unsigned int var_16 = 1346586250U;
int zero = 0;
unsigned long long int var_18 = 16118767949906254076ULL;
signed char var_19 = (signed char)40;
long long int var_20 = 4347858730727466075LL;
int var_21 = -170717974;
unsigned long long int arr_0 [17] [17] ;
unsigned long long int arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 14981868165039411175ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 7333421016176406868ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
