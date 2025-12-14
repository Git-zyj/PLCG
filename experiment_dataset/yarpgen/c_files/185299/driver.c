#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 5150590316253946159ULL;
unsigned short var_10 = (unsigned short)64443;
int var_11 = -1708560439;
long long int var_12 = 3236867704152473072LL;
int zero = 0;
int var_16 = -323030516;
long long int var_17 = 4767498395907737655LL;
unsigned short var_18 = (unsigned short)17021;
long long int var_19 = -1290651991347052584LL;
int var_20 = -1770213631;
long long int var_21 = 8322342103914205804LL;
long long int arr_1 [18] [18] ;
long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -1116650300318150428LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7316283475992613086LL : 6284953852458892716LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
