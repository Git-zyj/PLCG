#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1461353454;
unsigned short var_2 = (unsigned short)6792;
unsigned short var_4 = (unsigned short)40866;
unsigned short var_7 = (unsigned short)23886;
unsigned long long int var_9 = 12086060266304171402ULL;
unsigned short var_13 = (unsigned short)61123;
unsigned short var_14 = (unsigned short)19044;
signed char var_15 = (signed char)-91;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 12406998548164065604ULL;
_Bool var_18 = (_Bool)0;
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
