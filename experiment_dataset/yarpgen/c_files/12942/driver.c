#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57680;
short var_3 = (short)-17707;
long long int var_10 = -7001879705130137933LL;
unsigned long long int var_11 = 14736570726603873920ULL;
unsigned int var_12 = 161154525U;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 7488822077788366142LL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
