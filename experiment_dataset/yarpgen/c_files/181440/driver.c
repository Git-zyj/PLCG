#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned char var_8 = (unsigned char)107;
int var_9 = 1025262769;
unsigned long long int var_11 = 11244848382544072193ULL;
unsigned long long int var_12 = 9230724975474492208ULL;
unsigned long long int var_13 = 6388586164364858529ULL;
short var_19 = (short)-26683;
int zero = 0;
unsigned short var_20 = (unsigned short)29132;
unsigned int var_21 = 1347459018U;
_Bool var_22 = (_Bool)0;
int var_23 = 1281137468;
unsigned long long int var_24 = 13797611401479568972ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
