#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12317365526460620017ULL;
long long int var_4 = 4309456781758761052LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 17328136187545343081ULL;
unsigned short var_13 = (unsigned short)9259;
unsigned char var_15 = (unsigned char)145;
int zero = 0;
unsigned long long int var_17 = 4403200061657068139ULL;
unsigned short var_18 = (unsigned short)59655;
signed char var_19 = (signed char)-55;
unsigned char var_20 = (unsigned char)7;
unsigned int var_21 = 2698933873U;
unsigned long long int var_22 = 16108557390510837318ULL;
unsigned char var_23 = (unsigned char)58;
long long int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
signed char arr_2 [18] [18] [18] ;
int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -6881545368924968918LL : 8645244238371824923LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1286184829412800294ULL : 8711968790814477047ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)54 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 304732115;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
