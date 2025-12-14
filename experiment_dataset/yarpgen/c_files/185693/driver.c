#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)22;
long long int var_3 = 8122361302867045497LL;
long long int var_4 = 937324836581614980LL;
unsigned int var_5 = 2394092316U;
signed char var_6 = (signed char)27;
unsigned char var_7 = (unsigned char)175;
int var_8 = -1237528628;
signed char var_9 = (signed char)86;
signed char var_10 = (signed char)-116;
unsigned long long int var_11 = 6583735405165267263ULL;
int zero = 0;
unsigned long long int var_12 = 1593595002920455658ULL;
unsigned long long int var_13 = 2179128686866117299ULL;
long long int var_14 = 807663757595356626LL;
unsigned int var_15 = 3719768033U;
unsigned char var_16 = (unsigned char)133;
unsigned long long int var_17 = 1081067945811848981ULL;
signed char var_18 = (signed char)-67;
int arr_1 [15] ;
unsigned char arr_5 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1885497573;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)23 : (unsigned char)248;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
