#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12800870376395550508ULL;
long long int var_12 = -1848523176421560824LL;
unsigned long long int var_16 = 8689997716025772784ULL;
int zero = 0;
long long int var_17 = -7217551550012876679LL;
int var_18 = -31934913;
unsigned long long int var_19 = 5451731836770222446ULL;
unsigned long long int var_20 = 15156078470916675090ULL;
unsigned long long int var_21 = 4452822630467599221ULL;
unsigned long long int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 3906816937137264228ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
