#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3448610443U;
long long int var_3 = 576259588251311841LL;
unsigned int var_5 = 3073040637U;
unsigned long long int var_6 = 12004768168372180152ULL;
long long int var_8 = 3030287081746494374LL;
unsigned long long int var_9 = 16664638165206503511ULL;
unsigned long long int var_10 = 4044950159832275681ULL;
int zero = 0;
long long int var_11 = -3166721974612541016LL;
unsigned int var_12 = 1983697179U;
unsigned long long int var_13 = 1430591361342258968ULL;
unsigned long long int var_14 = 1461501117847636053ULL;
long long int var_15 = -3079247493233795540LL;
unsigned long long int var_16 = 1413935529446310187ULL;
unsigned long long int arr_2 [19] [19] ;
unsigned long long int arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 13360156319179532423ULL : 868614237576851800ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 204468726551598645ULL : 17970274621311654099ULL;
}

void checksum() {
    hash(&seed, var_11);
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
