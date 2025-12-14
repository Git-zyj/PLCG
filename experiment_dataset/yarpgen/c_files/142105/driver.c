#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5162801185497040362LL;
unsigned long long int var_9 = 14862547999235978039ULL;
unsigned long long int var_11 = 15566298146197616570ULL;
long long int var_13 = -759991672022325490LL;
unsigned long long int var_14 = 17907229970922689307ULL;
unsigned long long int var_16 = 15677584886607222891ULL;
int zero = 0;
unsigned long long int var_19 = 7450610997178460181ULL;
unsigned long long int var_20 = 10016766985587392128ULL;
unsigned long long int var_21 = 8952613678165513205ULL;
unsigned long long int var_22 = 14679788800115748751ULL;
long long int arr_0 [21] ;
long long int arr_1 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -7523245862342316756LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -3177751042998606844LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
