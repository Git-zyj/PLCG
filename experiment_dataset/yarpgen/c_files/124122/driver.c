#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4582672662412732812LL;
unsigned long long int var_1 = 10912442013350955357ULL;
unsigned long long int var_3 = 3661719224081838189ULL;
unsigned long long int var_6 = 18395382923394213554ULL;
long long int var_7 = 7735606625040996620LL;
unsigned long long int var_9 = 17843763198227069208ULL;
long long int var_11 = -9069853060247100662LL;
int zero = 0;
long long int var_12 = 7343220587542601032LL;
long long int var_13 = -1718447423349133746LL;
long long int var_14 = -1242027671484184258LL;
long long int var_15 = 7981303151208974999LL;
long long int var_16 = 3569739896289212192LL;
unsigned long long int var_17 = 9437883387261909637ULL;
long long int var_18 = 2995494630286618798LL;
long long int var_19 = 2249853100317049562LL;
unsigned long long int var_20 = 10293891919092242961ULL;
long long int var_21 = 6660646967361813499LL;
unsigned long long int var_22 = 9739863157192389679ULL;
long long int arr_0 [17] [17] ;
long long int arr_1 [17] [17] ;
long long int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
long long int arr_5 [16] ;
unsigned long long int arr_6 [16] ;
long long int arr_4 [16] ;
unsigned long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 7799122633886352970LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -7029633157975912779LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -3324350190469871384LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 8183042775465463600ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -903890381120658545LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 13770919971427853428ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 9187903340844529111LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 680328212796266602ULL : 13758641373402789620ULL;
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
