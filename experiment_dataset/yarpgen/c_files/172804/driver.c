#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6970655187464724419LL;
long long int var_2 = -4723430107669425892LL;
long long int var_4 = -3232056070698044878LL;
long long int var_6 = -2953767712521615933LL;
long long int var_7 = 5887126653688610514LL;
long long int var_8 = -4976893675802243398LL;
long long int var_9 = -6808684143434426969LL;
long long int var_10 = 5356715498497831469LL;
long long int var_12 = -8864973752105745796LL;
long long int var_13 = 8910813424471505343LL;
int zero = 0;
long long int var_16 = -3130429187090605491LL;
long long int var_17 = 5987087382150770634LL;
long long int var_18 = 6850909771459632023LL;
long long int var_19 = -6423057154034723848LL;
long long int var_20 = 2386776142730174708LL;
long long int var_21 = -4500873373685062946LL;
long long int arr_0 [24] [24] ;
long long int arr_1 [24] ;
long long int arr_4 [17] [17] ;
long long int arr_5 [17] [17] ;
long long int arr_6 [17] ;
long long int arr_2 [24] ;
long long int arr_7 [17] ;
long long int arr_8 [17] ;
long long int arr_15 [17] [17] [17] ;
long long int arr_16 [17] [17] [17] [17] ;
long long int arr_17 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 8667498872191504931LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -3456582777122431523LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = -7677300778276407073LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 9012717299641666292LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 4471909029289537345LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 3801751859164280352LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -1537534619360606885LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 7192845245049651708LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3339969845848360043LL : -8346367031996388012LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -6206536978493079809LL : -4968302232400253540LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = 8583421713875933778LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
