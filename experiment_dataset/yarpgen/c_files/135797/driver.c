#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7620804402491988376LL;
long long int var_1 = -9192565688102061083LL;
long long int var_2 = -4466338374503042104LL;
long long int var_4 = -2751386624667685990LL;
long long int var_5 = -9129181692480191192LL;
long long int var_6 = 6978924564892353288LL;
long long int var_7 = -1571045852544841617LL;
long long int var_8 = 8046112238017605022LL;
long long int var_9 = -2432234992973130286LL;
long long int var_10 = -8790029981852646637LL;
long long int var_11 = -2590543025365641054LL;
long long int var_12 = 8599896038547386028LL;
int zero = 0;
long long int var_14 = 1844464901750957567LL;
long long int var_15 = 4814007511692191094LL;
long long int var_16 = 6670852430584619326LL;
long long int var_17 = -5574525942696196040LL;
long long int var_18 = -2668158975395285370LL;
long long int var_19 = -2707823826511937104LL;
long long int var_20 = 3500726858122282801LL;
long long int var_21 = -257162196741236723LL;
long long int arr_0 [25] ;
long long int arr_1 [25] [25] ;
long long int arr_2 [14] ;
long long int arr_4 [14] ;
long long int arr_10 [14] [14] [14] ;
long long int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3098587361833912158LL : 5231116651269574678LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 2516871028131072704LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -3145860005258374505LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 8414472588380960004LL : 9165274391899891603LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -8844715311725824409LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2443568109654206031LL : -272745872932925124LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
