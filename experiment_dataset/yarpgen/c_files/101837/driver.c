#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56935;
short var_1 = (short)25749;
unsigned char var_3 = (unsigned char)100;
signed char var_4 = (signed char)-127;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 1060336992U;
unsigned long long int var_11 = 3474546486302884233ULL;
unsigned long long int var_14 = 6325983648742818758ULL;
signed char var_15 = (signed char)122;
int zero = 0;
long long int var_16 = -2632992742488698264LL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 12377791688098954957ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
