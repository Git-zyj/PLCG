#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)19447;
long long int var_7 = 1326017246269540035LL;
short var_8 = (short)-21411;
signed char var_10 = (signed char)41;
unsigned char var_12 = (unsigned char)89;
unsigned char var_13 = (unsigned char)80;
long long int var_15 = 7610406071315261380LL;
signed char var_16 = (signed char)-5;
unsigned long long int var_17 = 11380288685625675378ULL;
int zero = 0;
signed char var_18 = (signed char)8;
unsigned short var_19 = (unsigned short)3203;
signed char var_20 = (signed char)-105;
signed char var_21 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
