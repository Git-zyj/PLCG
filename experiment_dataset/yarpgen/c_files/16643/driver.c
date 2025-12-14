#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2177486376041500243LL;
unsigned long long int var_1 = 5109433143154679718ULL;
int var_2 = -494225714;
signed char var_3 = (signed char)5;
short var_4 = (short)-23488;
unsigned long long int var_5 = 8744715911280952466ULL;
unsigned int var_6 = 3313273657U;
long long int var_7 = -5604714834020100011LL;
unsigned char var_8 = (unsigned char)112;
long long int var_9 = 1676164061873837115LL;
long long int var_11 = -3298823833470625948LL;
int zero = 0;
long long int var_12 = 6366543307777214273LL;
signed char var_13 = (signed char)-75;
unsigned long long int var_14 = 9075780376079891952ULL;
unsigned char var_15 = (unsigned char)170;
unsigned int var_16 = 2726898621U;
unsigned long long int var_17 = 16094405189623797890ULL;
unsigned char var_18 = (unsigned char)8;
unsigned int var_19 = 2190297790U;
int var_20 = -185820680;
signed char var_21 = (signed char)125;
long long int arr_0 [13] [13] ;
unsigned char arr_3 [13] ;
unsigned short arr_4 [13] [13] [13] ;
unsigned long long int arr_5 [13] [13] ;
signed char arr_8 [13] [13] [13] [13] ;
unsigned short arr_11 [13] [13] ;
unsigned int arr_14 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 3355934347904284919LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)47547;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 16680979618998025674ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-116 : (signed char)-77;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)50733 : (unsigned short)58261;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1123498713U : 2988774056U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
