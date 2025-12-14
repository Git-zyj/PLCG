#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37648;
unsigned int var_1 = 1897848382U;
unsigned int var_3 = 1223215324U;
unsigned char var_4 = (unsigned char)37;
unsigned long long int var_7 = 9416743123777579483ULL;
unsigned long long int var_10 = 3397981302063071497ULL;
unsigned int var_11 = 3535267584U;
int zero = 0;
unsigned long long int var_12 = 17848653142398062405ULL;
short var_13 = (short)26665;
long long int var_14 = -2048188612290785369LL;
int var_15 = 1698895038;
unsigned int var_16 = 3787656474U;
int var_17 = -402670855;
long long int var_18 = 6950587476842241053LL;
unsigned int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3201804295U;
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
