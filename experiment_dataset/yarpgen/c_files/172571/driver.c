#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8334172581759857130ULL;
unsigned long long int var_1 = 7629601748275607447ULL;
unsigned long long int var_2 = 15899296716472539112ULL;
unsigned long long int var_5 = 11317519104698426825ULL;
unsigned long long int var_10 = 9883363181582476795ULL;
int zero = 0;
unsigned long long int var_11 = 9648583708201396422ULL;
unsigned long long int var_12 = 2578855740747359436ULL;
unsigned long long int var_13 = 10294713040149107877ULL;
unsigned long long int var_14 = 5384957684450900135ULL;
unsigned long long int var_15 = 17763686867030653385ULL;
unsigned long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 484808585137314335ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
