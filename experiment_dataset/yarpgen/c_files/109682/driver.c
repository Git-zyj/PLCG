#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
unsigned char var_1 = (unsigned char)6;
unsigned char var_2 = (unsigned char)76;
unsigned char var_3 = (unsigned char)244;
unsigned char var_4 = (unsigned char)117;
unsigned char var_5 = (unsigned char)157;
unsigned char var_6 = (unsigned char)232;
unsigned char var_7 = (unsigned char)252;
unsigned char var_8 = (unsigned char)162;
unsigned char var_9 = (unsigned char)234;
unsigned char var_10 = (unsigned char)188;
unsigned char var_11 = (unsigned char)147;
unsigned char var_12 = (unsigned char)39;
unsigned char var_13 = (unsigned char)229;
int zero = 0;
unsigned char var_14 = (unsigned char)157;
unsigned char var_15 = (unsigned char)188;
unsigned char var_16 = (unsigned char)159;
unsigned char var_17 = (unsigned char)82;
unsigned char var_18 = (unsigned char)175;
unsigned char var_19 = (unsigned char)6;
unsigned char var_20 = (unsigned char)102;
unsigned char var_21 = (unsigned char)28;
unsigned char var_22 = (unsigned char)97;
unsigned char var_23 = (unsigned char)126;
unsigned char var_24 = (unsigned char)93;
unsigned char var_25 = (unsigned char)246;
unsigned char var_26 = (unsigned char)129;
unsigned char arr_19 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)25 : (unsigned char)86;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
