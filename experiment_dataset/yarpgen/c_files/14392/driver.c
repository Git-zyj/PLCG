#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17993659566533918005ULL;
unsigned long long int var_4 = 1403675718892212054ULL;
unsigned long long int var_11 = 5405519878797915476ULL;
unsigned long long int var_12 = 999002625687220546ULL;
unsigned long long int var_13 = 8070143187706917294ULL;
unsigned long long int var_15 = 7847693578533868844ULL;
unsigned long long int var_16 = 13722892805209170879ULL;
int zero = 0;
unsigned long long int var_18 = 8097234130841053319ULL;
unsigned long long int var_19 = 15094277549941625418ULL;
unsigned long long int var_20 = 6177133810661538723ULL;
unsigned long long int var_21 = 4830990432880655506ULL;
unsigned long long int var_22 = 3017339810590215487ULL;
unsigned long long int var_23 = 13459498258100208798ULL;
unsigned long long int var_24 = 18253773789396014261ULL;
unsigned long long int var_25 = 17913814210730001083ULL;
unsigned long long int var_26 = 17031485785645667776ULL;
unsigned long long int var_27 = 7557754665109474234ULL;
unsigned long long int arr_1 [25] ;
unsigned long long int arr_2 [25] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_4 [25] [25] ;
unsigned long long int arr_7 [25] ;
unsigned long long int arr_8 [25] [25] [25] [25] ;
unsigned long long int arr_21 [25] [25] [25] [25] [25] ;
unsigned long long int arr_9 [25] [25] ;
unsigned long long int arr_15 [25] ;
unsigned long long int arr_22 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 4306077574510746163ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 18100378151501570330ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 13517858357594702082ULL : 14205043897198988384ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 16376227094615694901ULL : 5403449611816537702ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 4544231611300067612ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 15378440264243675619ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = 14182480730825136063ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 12834023159135635768ULL : 17925499313124484758ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 7429307461572274764ULL : 2924407272013370210ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3188599120360155528ULL : 5562245989070014764ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
