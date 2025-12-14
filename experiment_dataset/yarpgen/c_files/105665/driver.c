#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8778278076121716410LL;
unsigned short var_1 = (unsigned short)34509;
unsigned char var_2 = (unsigned char)34;
long long int var_3 = -604352470620730143LL;
unsigned int var_5 = 3339891079U;
long long int var_6 = -3526000711349636815LL;
unsigned int var_7 = 1032639389U;
unsigned long long int var_8 = 12402050883044465073ULL;
unsigned int var_9 = 363104134U;
int zero = 0;
unsigned char var_10 = (unsigned char)152;
unsigned long long int var_11 = 17456891860647873879ULL;
unsigned long long int var_12 = 1152282252591274032ULL;
unsigned long long int var_13 = 6236489485271405064ULL;
unsigned short var_14 = (unsigned short)32787;
long long int var_15 = -2345325250389955465LL;
unsigned int var_16 = 2000439637U;
unsigned long long int var_17 = 259590150330535298ULL;
long long int var_18 = 5689123438183411347LL;
unsigned char var_19 = (unsigned char)89;
long long int var_20 = 585440114004964929LL;
unsigned long long int var_21 = 11447472166584727474ULL;
unsigned long long int var_22 = 9764131432546444751ULL;
unsigned int arr_3 [17] [17] [17] ;
unsigned int arr_5 [17] [17] ;
unsigned int arr_17 [22] ;
unsigned int arr_18 [22] ;
unsigned char arr_2 [17] ;
unsigned long long int arr_13 [17] [17] [17] [17] [17] [17] ;
unsigned char arr_14 [17] ;
unsigned int arr_15 [17] [17] ;
unsigned char arr_16 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4144466553U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 44273139U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = 3688846151U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = 2941670907U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 12328112474780200620ULL : 5161372527830828682ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)161 : (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 90696104U : 320643406U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)25 : (unsigned char)249;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
