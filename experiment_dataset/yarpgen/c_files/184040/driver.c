#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5685370258591208434LL;
int var_9 = -2084589038;
int var_10 = 337930880;
int zero = 0;
unsigned long long int var_18 = 8011875923783165626ULL;
signed char var_19 = (signed char)14;
long long int var_20 = 2391766188286675580LL;
long long int var_21 = -5863774803769928586LL;
unsigned long long int arr_1 [16] ;
_Bool arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 13184902412875571594ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
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
