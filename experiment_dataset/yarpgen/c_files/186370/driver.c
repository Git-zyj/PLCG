#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13578763950161238550ULL;
int var_2 = -1208265217;
unsigned int var_4 = 2960790423U;
unsigned short var_5 = (unsigned short)27989;
_Bool var_8 = (_Bool)0;
unsigned short var_13 = (unsigned short)25851;
int var_17 = -656582398;
int zero = 0;
unsigned int var_18 = 867079808U;
unsigned short var_19 = (unsigned short)34782;
unsigned long long int var_20 = 15473701836409069468ULL;
long long int var_21 = -3011706420528402943LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
