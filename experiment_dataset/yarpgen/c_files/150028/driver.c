#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6611910801996481691LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 13223560429513794082ULL;
short var_15 = (short)-22961;
int zero = 0;
unsigned long long int var_19 = 15872721894502653922ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)24;
long long int var_22 = 7890732347231123831LL;
signed char var_23 = (signed char)-108;
long long int var_24 = 1505709698103055947LL;
unsigned long long int var_25 = 10882507652141253186ULL;
unsigned long long int arr_3 [19] [19] [19] ;
unsigned long long int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 16608679474535392499ULL : 873170626301553328ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 8706311994431022423ULL : 8939728826240325116ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
