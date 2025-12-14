#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1845209598;
int var_5 = 811731759;
int var_7 = 424556735;
unsigned short var_8 = (unsigned short)17291;
long long int var_9 = -4672979592194628005LL;
signed char var_10 = (signed char)-118;
short var_11 = (short)18288;
unsigned short var_12 = (unsigned short)62647;
unsigned short var_13 = (unsigned short)47196;
unsigned long long int var_14 = 985971415911949154ULL;
short var_15 = (short)29912;
int zero = 0;
unsigned int var_16 = 1343932635U;
int var_17 = -606419265;
unsigned long long int var_18 = 13783773929947311350ULL;
long long int var_19 = 295056378650392311LL;
void init() {
}

void checksum() {
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
