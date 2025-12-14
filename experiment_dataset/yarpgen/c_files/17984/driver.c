#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8664386139531817799LL;
unsigned long long int var_2 = 17423792174137993124ULL;
long long int var_3 = -9126635738857764766LL;
long long int var_7 = -5458332143959235561LL;
int zero = 0;
long long int var_14 = 4698326803965590099LL;
long long int var_15 = 7674023375901890716LL;
unsigned long long int var_16 = 10375931170276049315ULL;
unsigned long long int var_17 = 4643116052551927725ULL;
unsigned long long int var_18 = 12299836391662116016ULL;
long long int var_19 = -8728344593117701698LL;
unsigned long long int var_20 = 14155678563680625403ULL;
long long int arr_1 [20] ;
long long int arr_3 [20] ;
long long int arr_8 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -8959685299461913730LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -1055445754624563191LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1675565819819658107LL : 8599050951067793112LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
