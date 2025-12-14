#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 327862030;
unsigned long long int var_1 = 566015058318324656ULL;
int var_2 = 741384731;
unsigned long long int var_3 = 8198410637367808487ULL;
int var_4 = -1591106635;
int var_5 = 1740061841;
unsigned long long int var_6 = 2187027243479996697ULL;
int var_7 = -621171542;
unsigned short var_8 = (unsigned short)18835;
unsigned long long int var_9 = 9618808894895897972ULL;
int zero = 0;
int var_10 = -342424292;
unsigned long long int var_11 = 855658289705399478ULL;
unsigned long long int var_12 = 5646724211829833032ULL;
unsigned short var_13 = (unsigned short)45339;
unsigned long long int var_14 = 8249347940378175840ULL;
unsigned long long int var_15 = 9016732679003707794ULL;
int var_16 = -551471757;
unsigned short var_17 = (unsigned short)27225;
unsigned short var_18 = (unsigned short)9071;
unsigned long long int var_19 = 9573666943091473050ULL;
unsigned short arr_2 [15] ;
int arr_4 [25] ;
int arr_5 [25] ;
int arr_7 [25] [25] ;
unsigned long long int arr_9 [25] [25] ;
int arr_10 [25] [25] ;
int arr_11 [25] ;
unsigned short arr_20 [16] ;
int arr_3 [15] [15] ;
unsigned long long int arr_6 [25] ;
int arr_13 [25] [25] [25] ;
unsigned long long int arr_16 [19] ;
unsigned long long int arr_17 [19] ;
unsigned long long int arr_18 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)61446;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -1273390297;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 256965140;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = -2110510125;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 14162366015957323234ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = -1174894168;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 1618452172;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (unsigned short)8326;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = -444775311;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 9694415714570851346ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1613611497 : -514881297;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 4409554735213455394ULL : 17707862536729182235ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 6801704121122797361ULL : 13558232349999863061ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 5865531455547222703ULL : 3110736431078863658ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
