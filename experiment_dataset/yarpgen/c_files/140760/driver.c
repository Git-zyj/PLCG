#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12660;
long long int var_2 = 3820845758892216507LL;
unsigned long long int var_3 = 3370366666669780296ULL;
unsigned char var_4 = (unsigned char)179;
signed char var_5 = (signed char)123;
unsigned long long int var_6 = 2422728083036675718ULL;
long long int var_8 = 7099361133325840322LL;
unsigned char var_9 = (unsigned char)180;
signed char var_10 = (signed char)37;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)148;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)50262;
unsigned short var_18 = (unsigned short)37316;
unsigned short var_19 = (unsigned short)23706;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
