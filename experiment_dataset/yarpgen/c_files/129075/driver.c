#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1144021740;
int var_6 = -56146000;
signed char var_8 = (signed char)-102;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)37;
int zero = 0;
unsigned long long int var_15 = 13428670248448099632ULL;
unsigned long long int var_16 = 1388199491801430825ULL;
unsigned short var_17 = (unsigned short)8906;
unsigned short var_18 = (unsigned short)1157;
unsigned long long int var_19 = 11620661666445603161ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
