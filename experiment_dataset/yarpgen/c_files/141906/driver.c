#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-17;
signed char var_5 = (signed char)-101;
int var_7 = -646420496;
unsigned long long int var_8 = 6896354673631743174ULL;
unsigned long long int var_11 = 7905886936008475567ULL;
unsigned long long int var_12 = 15972833696737456704ULL;
unsigned long long int var_16 = 13265688116935377108ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)240;
short var_20 = (short)27191;
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
