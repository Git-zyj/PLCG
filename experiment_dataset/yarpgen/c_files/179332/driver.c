#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1510131341983338618ULL;
unsigned int var_3 = 576401010U;
unsigned short var_4 = (unsigned short)26339;
unsigned int var_5 = 221930212U;
unsigned long long int var_6 = 5369955372822010667ULL;
unsigned int var_7 = 2694350667U;
unsigned char var_9 = (unsigned char)14;
unsigned int var_10 = 4200146006U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2307681466U;
int var_18 = -1289817848;
short var_19 = (short)21516;
unsigned int var_20 = 3965755707U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
