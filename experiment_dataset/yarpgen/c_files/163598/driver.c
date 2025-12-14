#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 9565584166431730377ULL;
int zero = 0;
unsigned long long int var_14 = 4424174290437243365ULL;
unsigned long long int var_15 = 17923784970508811402ULL;
unsigned long long int var_16 = 9069638839889141888ULL;
unsigned long long int var_17 = 6713532499413209635ULL;
unsigned long long int var_18 = 5491580251046862799ULL;
unsigned long long int var_19 = 13538628727825894019ULL;
unsigned long long int var_20 = 4837226461659984014ULL;
unsigned long long int var_21 = 5820565898228640812ULL;
unsigned long long int var_22 = 15800164493622584649ULL;
unsigned long long int var_23 = 4586710132238975070ULL;
unsigned long long int var_24 = 12133299568503405126ULL;
unsigned long long int var_25 = 11613671199840287528ULL;
unsigned long long int var_26 = 15828950449576803300ULL;
unsigned long long int var_27 = 9951973813034078402ULL;
unsigned long long int var_28 = 10839971935374714105ULL;
unsigned long long int var_29 = 7934545049003433950ULL;
unsigned long long int var_30 = 2829330003858021669ULL;
unsigned long long int var_31 = 8783242369975421571ULL;
unsigned long long int var_32 = 14982705332845771262ULL;
unsigned long long int var_33 = 9365058502125229605ULL;
unsigned long long int var_34 = 5494385768738845289ULL;
unsigned long long int var_35 = 17260430395337527560ULL;
unsigned long long int arr_2 [21] ;
unsigned long long int arr_15 [10] [10] [10] [10] ;
unsigned long long int arr_19 [10] ;
unsigned long long int arr_23 [10] [10] ;
unsigned long long int arr_29 [10] [10] ;
unsigned long long int arr_30 [10] [10] ;
unsigned long long int arr_37 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 4474061532724687037ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 7250421799872290869ULL : 9836367512852611482ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 219971562513003642ULL : 4966625593799751826ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_23 [i_0] [i_1] = 9300549554897854727ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_29 [i_0] [i_1] = 17603898679863280901ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = 16970662508416636831ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 10402498539476016173ULL : 4400869454969159900ULL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
