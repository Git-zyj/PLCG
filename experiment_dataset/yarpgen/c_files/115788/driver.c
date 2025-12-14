#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1290137220351267693LL;
unsigned long long int var_5 = 13885763693634301890ULL;
unsigned long long int var_6 = 11945364853749266107ULL;
unsigned short var_10 = (unsigned short)56008;
unsigned char var_12 = (unsigned char)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 9459187990144857763ULL;
int var_17 = 1262191822;
long long int var_18 = -8571193101067477532LL;
unsigned int var_19 = 4247961987U;
unsigned char var_20 = (unsigned char)25;
int arr_0 [22] ;
unsigned long long int arr_4 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1848291988;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 12326905936517631665ULL : 7175901223801993192ULL;
}

void checksum() {
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
