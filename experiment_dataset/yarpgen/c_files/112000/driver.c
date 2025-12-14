#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8063443159858080970LL;
unsigned short var_3 = (unsigned short)1014;
signed char var_5 = (signed char)103;
unsigned int var_6 = 2464609038U;
unsigned short var_7 = (unsigned short)15374;
int zero = 0;
int var_11 = -533871647;
short var_12 = (short)16351;
signed char var_13 = (signed char)-93;
long long int arr_1 [15] ;
long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 6578488432451109369LL : -6391725638249779257LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3568760938366152849LL : 6315346693731071937LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
