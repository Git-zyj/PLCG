#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)242;
unsigned long long int var_3 = 5622681673358020224ULL;
unsigned char var_4 = (unsigned char)163;
unsigned char var_6 = (unsigned char)163;
unsigned char var_7 = (unsigned char)11;
unsigned char var_8 = (unsigned char)27;
unsigned char var_9 = (unsigned char)10;
unsigned char var_12 = (unsigned char)13;
short var_15 = (short)6677;
unsigned long long int var_16 = 8461486198935655977ULL;
int zero = 0;
long long int var_18 = -9138880011316135370LL;
unsigned long long int var_19 = 7688912205988499011ULL;
long long int var_20 = -7116131898718818880LL;
long long int var_21 = 3819533223903759459LL;
unsigned char var_22 = (unsigned char)47;
unsigned char var_23 = (unsigned char)52;
unsigned char var_24 = (unsigned char)177;
unsigned char var_25 = (unsigned char)103;
unsigned long long int var_26 = 5266600420840885182ULL;
long long int var_27 = -2247095823356816396LL;
unsigned long long int var_28 = 12437568015689185426ULL;
unsigned char var_29 = (unsigned char)169;
unsigned long long int var_30 = 9574731740014322089ULL;
long long int var_31 = 6644671513965792692LL;
long long int var_32 = 5450641683950282340LL;
short var_33 = (short)-12184;
unsigned char var_34 = (unsigned char)183;
short var_35 = (short)-14097;
long long int var_36 = 1099370586450413825LL;
unsigned char arr_2 [15] [15] ;
unsigned long long int arr_3 [15] ;
unsigned char arr_9 [15] [15] [15] ;
unsigned char arr_10 [15] [15] [15] [15] ;
unsigned char arr_25 [20] ;
unsigned long long int arr_30 [20] [20] [20] [20] ;
long long int arr_31 [20] [20] [20] ;
long long int arr_33 [20] [20] ;
short arr_36 [20] ;
long long int arr_39 [20] [20] [20] [20] ;
long long int arr_24 [15] ;
unsigned char arr_32 [20] [20] [20] ;
unsigned char arr_42 [20] [20] [20] ;
unsigned char arr_43 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 8768300379952984518ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)54 : (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 5577398653027283889ULL : 13031652700582740854ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = -8927718016289242932LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_33 [i_0] [i_1] = 4126108850819566107LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_36 [i_0] = (short)-28624;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 8457496547721102580LL : -7303013145543192000LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? -3167242807234476968LL : 5640544463003293494LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)107 : (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)131 : (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)143;
}

void checksum() {
    hash(&seed, var_18);
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
