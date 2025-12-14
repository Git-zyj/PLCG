#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1170238281;
unsigned int var_3 = 3412307339U;
long long int var_4 = 1856864110243210003LL;
unsigned int var_5 = 3763240853U;
unsigned char var_6 = (unsigned char)60;
long long int var_8 = -8313705569646559064LL;
unsigned int var_9 = 4170739416U;
unsigned int var_10 = 3858985337U;
unsigned short var_14 = (unsigned short)40306;
unsigned short var_16 = (unsigned short)44398;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)-29169;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-9482;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
