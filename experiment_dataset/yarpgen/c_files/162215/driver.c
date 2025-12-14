#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = -887747017;
long long int var_4 = 9041206784901215444LL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)164;
unsigned char var_10 = (unsigned char)248;
unsigned char var_11 = (unsigned char)149;
unsigned long long int var_12 = 2766776659134495411ULL;
int zero = 0;
unsigned int var_13 = 524049712U;
signed char var_14 = (signed char)-43;
signed char var_15 = (signed char)-54;
unsigned long long int var_16 = 18373192804326937285ULL;
long long int var_17 = -5076705684082434928LL;
void init() {
}

void checksum() {
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
