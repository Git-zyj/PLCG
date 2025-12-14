#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -242142550;
int var_1 = -1322767368;
short var_2 = (short)10035;
int var_4 = 1603885332;
unsigned int var_6 = 264975987U;
unsigned short var_8 = (unsigned short)40275;
unsigned int var_9 = 3440988498U;
signed char var_10 = (signed char)116;
long long int var_11 = 3792524918641426467LL;
int var_12 = 1872924456;
signed char var_15 = (signed char)-92;
signed char var_16 = (signed char)-78;
unsigned long long int var_18 = 5094610365659036282ULL;
int zero = 0;
signed char var_19 = (signed char)-37;
unsigned int var_20 = 1412336115U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)222;
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
