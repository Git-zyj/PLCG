#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)86;
unsigned long long int var_2 = 17719846661238398790ULL;
short var_5 = (short)-8566;
long long int var_6 = 1493138097219124922LL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)11018;
signed char var_9 = (signed char)-103;
unsigned short var_10 = (unsigned short)3655;
unsigned char var_11 = (unsigned char)39;
int zero = 0;
unsigned long long int var_16 = 1735579000669454367ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 2178584587308561211LL;
signed char var_19 = (signed char)85;
signed char arr_1 [12] ;
long long int arr_2 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4949408585728506047LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
