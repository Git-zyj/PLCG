#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24587;
unsigned int var_2 = 3076162725U;
signed char var_3 = (signed char)54;
signed char var_4 = (signed char)56;
unsigned short var_7 = (unsigned short)8762;
long long int var_8 = -2926900719414669977LL;
int var_9 = 1204917030;
int var_10 = -582268874;
unsigned long long int var_13 = 16654221657020517344ULL;
unsigned char var_14 = (unsigned char)245;
long long int var_16 = 8987367420505314237LL;
int zero = 0;
unsigned char var_17 = (unsigned char)159;
signed char var_18 = (signed char)-94;
unsigned long long int var_19 = 4080737746486014675ULL;
int var_20 = 2020096983;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
