#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-6;
signed char var_3 = (signed char)10;
signed char var_4 = (signed char)78;
long long int var_5 = -5355805629635194643LL;
unsigned char var_7 = (unsigned char)63;
long long int var_8 = 1692470059306154950LL;
unsigned long long int var_10 = 14487819918117923159ULL;
signed char var_11 = (signed char)-33;
unsigned char var_13 = (unsigned char)108;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)230;
signed char var_16 = (signed char)40;
int zero = 0;
long long int var_17 = -2371463986940206867LL;
unsigned char var_18 = (unsigned char)143;
int var_19 = -186111218;
long long int arr_0 [12] [12] ;
unsigned short arr_3 [12] [12] ;
long long int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -4621259093641180149LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)25370;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1389504332143717970LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
