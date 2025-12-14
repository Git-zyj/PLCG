#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3446839178089567673LL;
long long int var_1 = 786722589303697159LL;
long long int var_2 = 5744763937764795329LL;
long long int var_9 = 1120276179326206885LL;
long long int var_10 = 3787988830135242830LL;
int zero = 0;
long long int var_16 = 7553634043414598608LL;
long long int var_17 = 343946299811476171LL;
long long int var_18 = 6042995320996192805LL;
long long int var_19 = -2453892456396244313LL;
long long int var_20 = 3443206887543092287LL;
long long int var_21 = -1738340170944005294LL;
long long int var_22 = -5145498777766942753LL;
long long int var_23 = -3630844495083223512LL;
long long int var_24 = 5838742706632343155LL;
long long int var_25 = -157752155163626576LL;
long long int arr_0 [11] ;
long long int arr_1 [11] ;
long long int arr_5 [21] [21] ;
long long int arr_9 [25] [25] ;
long long int arr_10 [25] [25] ;
long long int arr_2 [11] ;
long long int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -3522176245888141191LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1591061109371850611LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -7454169394441542848LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 870274128078735373LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = -7043351289612517395LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1938975188885120465LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 8393222052548106454LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
