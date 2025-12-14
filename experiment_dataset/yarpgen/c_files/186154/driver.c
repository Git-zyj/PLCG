#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 581272140276774824ULL;
long long int var_5 = -5983529954379180696LL;
int var_7 = -1317574570;
unsigned char var_8 = (unsigned char)252;
unsigned short var_9 = (unsigned short)48291;
unsigned char var_11 = (unsigned char)254;
unsigned long long int var_15 = 4124021665782346644ULL;
unsigned short var_16 = (unsigned short)17102;
int zero = 0;
short var_19 = (short)28830;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)23858;
int var_22 = 481314591;
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
