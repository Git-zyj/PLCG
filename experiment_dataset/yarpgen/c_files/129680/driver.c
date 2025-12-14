#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13293878976824142848ULL;
int var_1 = 182220680;
int var_3 = -1536252953;
unsigned long long int var_6 = 17145591572683732341ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 1173097498929493355ULL;
unsigned long long int var_9 = 5828853101849425659ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 18220314358983339589ULL;
unsigned long long int var_12 = 698911763185359164ULL;
unsigned long long int var_13 = 1074054291025871220ULL;
int var_14 = -1786974454;
int var_15 = -1784346275;
unsigned long long int var_16 = 14094211083543591144ULL;
unsigned long long int var_17 = 6534021719266012133ULL;
unsigned long long int arr_0 [24] ;
_Bool arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3719136722221351104ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
