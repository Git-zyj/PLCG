#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -893397026;
long long int var_3 = -886901247785590337LL;
unsigned long long int var_4 = 17402584605621738953ULL;
long long int var_5 = -3224103295927735085LL;
unsigned int var_10 = 3629246546U;
signed char var_11 = (signed char)-43;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-9027;
long long int var_14 = -5425129718866408913LL;
signed char var_15 = (signed char)-63;
long long int var_16 = -4436816223198996437LL;
short var_17 = (short)-28134;
unsigned long long int var_18 = 10456370972605099508ULL;
signed char arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)64;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
