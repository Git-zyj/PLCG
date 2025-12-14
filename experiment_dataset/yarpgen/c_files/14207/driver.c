#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3340425663875415392LL;
int var_1 = -64683839;
unsigned short var_2 = (unsigned short)52963;
long long int var_3 = 2572733248240233778LL;
unsigned short var_4 = (unsigned short)65488;
unsigned long long int var_5 = 14424344827744403883ULL;
unsigned char var_6 = (unsigned char)44;
unsigned short var_7 = (unsigned short)7917;
unsigned long long int var_8 = 10469430001729171612ULL;
unsigned short var_10 = (unsigned short)60899;
_Bool var_11 = (_Bool)0;
long long int var_13 = -1967753692891744656LL;
int zero = 0;
int var_14 = -561205890;
unsigned short var_15 = (unsigned short)31546;
int var_16 = -1644773222;
long long int var_17 = -4890034497349697699LL;
long long int var_18 = -1664422760531878680LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
