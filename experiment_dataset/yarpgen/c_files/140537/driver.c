#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1869768867012177349ULL;
unsigned long long int var_7 = 1821315590527689905ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 15900434329187871033ULL;
int zero = 0;
unsigned long long int var_16 = 15601138571718183588ULL;
unsigned long long int var_17 = 6376986348604672558ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 1769363315526413720ULL;
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
