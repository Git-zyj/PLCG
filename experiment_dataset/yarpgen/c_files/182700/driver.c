#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26392;
long long int var_1 = 8485535092081097650LL;
long long int var_4 = -4277696945547147466LL;
signed char var_5 = (signed char)6;
unsigned long long int var_6 = 3175538954814252510ULL;
short var_7 = (short)16945;
unsigned long long int var_8 = 1301687775187591555ULL;
int var_9 = -1626257499;
int var_11 = 1862760308;
int zero = 0;
unsigned long long int var_12 = 2418989824825491835ULL;
unsigned char var_13 = (unsigned char)27;
unsigned long long int var_14 = 15898519095954642653ULL;
short var_15 = (short)7839;
unsigned long long int arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1119301234881494108ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 2778541283753561115ULL;
}

void checksum() {
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
