#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5642648596962728332LL;
unsigned short var_1 = (unsigned short)9143;
_Bool var_2 = (_Bool)0;
int var_3 = 1277507068;
unsigned short var_4 = (unsigned short)47286;
short var_5 = (short)-26038;
int var_7 = 1302959276;
unsigned char var_8 = (unsigned char)186;
short var_9 = (short)22865;
unsigned short var_10 = (unsigned short)11721;
long long int var_11 = 2771528018726174702LL;
signed char var_12 = (signed char)31;
unsigned short var_13 = (unsigned short)5919;
signed char var_14 = (signed char)11;
int var_16 = -1919322166;
unsigned long long int var_17 = 4604472184167079444ULL;
int zero = 0;
signed char var_18 = (signed char)108;
signed char var_19 = (signed char)90;
long long int var_20 = -5362088281536961026LL;
unsigned char var_21 = (unsigned char)50;
signed char var_22 = (signed char)40;
short arr_0 [23] ;
int arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-21898;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 1534179560;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
