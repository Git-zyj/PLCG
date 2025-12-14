#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 706862465;
long long int var_4 = 8142922534680820029LL;
unsigned long long int var_5 = 907349621283260890ULL;
signed char var_6 = (signed char)-79;
signed char var_7 = (signed char)-57;
unsigned int var_9 = 4215009557U;
long long int var_12 = -3486471177134533867LL;
unsigned char var_13 = (unsigned char)71;
unsigned int var_15 = 4055514814U;
unsigned short var_16 = (unsigned short)42090;
unsigned short var_17 = (unsigned short)53536;
int zero = 0;
long long int var_19 = -7523462687816684840LL;
unsigned short var_20 = (unsigned short)16444;
unsigned int var_21 = 1134720304U;
long long int var_22 = -6264249420367795862LL;
unsigned char var_23 = (unsigned char)62;
signed char var_24 = (signed char)-30;
long long int var_25 = -7854932779642175950LL;
signed char var_26 = (signed char)47;
unsigned short var_27 = (unsigned short)16177;
signed char var_28 = (signed char)81;
unsigned char var_29 = (unsigned char)206;
long long int var_30 = -1651332808706735957LL;
long long int var_31 = -6231691035937380452LL;
unsigned char var_32 = (unsigned char)85;
_Bool var_33 = (_Bool)0;
signed char var_34 = (signed char)-65;
unsigned long long int arr_0 [15] [15] ;
unsigned int arr_1 [15] ;
signed char arr_3 [15] ;
long long int arr_5 [15] [15] [15] [15] ;
signed char arr_7 [15] [15] ;
unsigned char arr_11 [15] [15] ;
unsigned short arr_17 [15] [15] [15] [15] [15] [15] ;
long long int arr_22 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 3025614058316276554ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2303138603U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)16 : (signed char)109;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -2816166673185250218LL : -464614142185015870LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)125 : (signed char)22;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)947;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = 7707029681669838676LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
