#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5261274571373405195LL;
long long int var_2 = 5346324565226035955LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 9871188338661072468ULL;
signed char var_9 = (signed char)-77;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 2485353547U;
int zero = 0;
long long int var_18 = 2005322537926817881LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1808488062U;
unsigned long long int var_21 = 15321493769289684373ULL;
short var_22 = (short)31198;
unsigned int var_23 = 1329358817U;
unsigned long long int arr_1 [24] ;
unsigned long long int arr_2 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 14779342622265681913ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6078988515382347110ULL : 4865023493259963153ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
