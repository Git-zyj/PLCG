#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1292532408933975986ULL;
unsigned long long int var_4 = 16427886797828424661ULL;
unsigned long long int var_7 = 14286378773926225119ULL;
unsigned short var_14 = (unsigned short)57865;
int zero = 0;
short var_17 = (short)-4643;
unsigned long long int var_18 = 5762951603510979467ULL;
short var_19 = (short)31419;
unsigned short var_20 = (unsigned short)7992;
unsigned long long int var_21 = 17002089075221295492ULL;
unsigned short arr_0 [10] ;
unsigned short arr_1 [10] ;
unsigned long long int arr_2 [10] ;
unsigned short arr_6 [10] [10] ;
unsigned long long int arr_4 [10] ;
unsigned long long int arr_5 [10] ;
unsigned short arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)9178;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56880 : (unsigned short)34743;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2181468641345065433ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)37153;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6110295598406660222ULL : 3687590689975393893ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 11466401248712452538ULL : 5430393626088712666ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6147 : (unsigned short)21608;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
