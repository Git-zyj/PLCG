#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 567550458U;
long long int var_6 = 9039905423645208009LL;
unsigned long long int var_8 = 16568211185510615290ULL;
long long int var_9 = 3386028751001822293LL;
unsigned int var_11 = 1327165183U;
signed char var_12 = (signed char)-7;
unsigned long long int var_18 = 2359437551905646602ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)63227;
unsigned char var_21 = (unsigned char)138;
int var_22 = 2028200159;
void init() {
}

void checksum() {
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
