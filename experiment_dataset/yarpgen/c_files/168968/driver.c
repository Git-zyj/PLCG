#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)77;
unsigned short var_2 = (unsigned short)14802;
unsigned long long int var_4 = 8350940350258039096ULL;
signed char var_6 = (signed char)-13;
int var_7 = -2033528738;
unsigned short var_8 = (unsigned short)31891;
int var_9 = -936643193;
unsigned long long int var_10 = 15154308145869834957ULL;
unsigned long long int var_11 = 6792586571716209181ULL;
long long int var_12 = 1622667370322456529LL;
int zero = 0;
int var_13 = -528525377;
_Bool var_14 = (_Bool)1;
int var_15 = 47757540;
long long int var_16 = -6338110124552378777LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
