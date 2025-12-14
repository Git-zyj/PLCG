#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11138;
unsigned int var_1 = 3415960746U;
unsigned short var_2 = (unsigned short)59885;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_5 = -527405479;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)13;
unsigned int var_9 = 3096318501U;
unsigned short var_10 = (unsigned short)39727;
unsigned long long int var_11 = 12828897294977262625ULL;
unsigned char var_13 = (unsigned char)45;
unsigned char var_14 = (unsigned char)208;
unsigned short var_15 = (unsigned short)22210;
int zero = 0;
unsigned short var_16 = (unsigned short)13845;
signed char var_17 = (signed char)28;
long long int var_18 = -1066203574729331520LL;
void init() {
}

void checksum() {
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
