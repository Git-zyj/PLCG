#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7301918490795161087LL;
long long int var_2 = 4904773928435121541LL;
long long int var_3 = 7105215855266627823LL;
int var_5 = -1303787176;
unsigned char var_6 = (unsigned char)16;
signed char var_7 = (signed char)102;
long long int var_10 = -95838192911521620LL;
short var_11 = (short)-13086;
unsigned short var_12 = (unsigned short)44953;
unsigned long long int var_13 = 18216400706299979532ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)220;
long long int var_15 = -7606732548042868436LL;
unsigned int var_16 = 3944103939U;
unsigned long long int var_17 = 17674157263950535649ULL;
int var_18 = -162160110;
int arr_9 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1607751648 : -406842451;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
