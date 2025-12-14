#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14932283977466357840ULL;
unsigned int var_1 = 375772549U;
signed char var_2 = (signed char)98;
long long int var_3 = -6906609880675991371LL;
unsigned short var_5 = (unsigned short)63321;
long long int var_8 = 7781299595121159811LL;
signed char var_9 = (signed char)56;
int var_10 = 1490969612;
int var_11 = 1222594913;
int zero = 0;
unsigned long long int var_12 = 11879683715514424299ULL;
unsigned long long int var_13 = 8758858062551106488ULL;
unsigned long long int var_14 = 6634757447152709036ULL;
long long int var_15 = 5102787101703526344LL;
int arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -278559369;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
