#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1355729213U;
int var_2 = -1541001932;
short var_3 = (short)10032;
int var_5 = 1938322514;
short var_6 = (short)4282;
unsigned int var_7 = 152563893U;
unsigned long long int var_8 = 14667742688107623920ULL;
short var_10 = (short)25681;
int zero = 0;
unsigned long long int var_12 = 2636557631426571602ULL;
int var_13 = -87973670;
unsigned int var_14 = 3365586217U;
signed char var_15 = (signed char)-118;
int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1019458229;
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
