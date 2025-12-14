#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2298579852U;
unsigned short var_1 = (unsigned short)6586;
_Bool var_3 = (_Bool)1;
long long int var_5 = -221979941874145912LL;
unsigned int var_6 = 2151805368U;
unsigned long long int var_7 = 6488205753763026158ULL;
long long int var_9 = -7110944310338391210LL;
unsigned char var_10 = (unsigned char)149;
unsigned int var_11 = 2541862578U;
unsigned char var_12 = (unsigned char)59;
int zero = 0;
signed char var_13 = (signed char)-22;
signed char var_14 = (signed char)116;
signed char var_15 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
