#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1591804644;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 582930241U;
long long int var_5 = 1094881045087334137LL;
unsigned short var_14 = (unsigned short)31649;
unsigned short var_16 = (unsigned short)29528;
int zero = 0;
unsigned int var_18 = 1293353175U;
unsigned char var_19 = (unsigned char)52;
unsigned long long int var_20 = 13321907890253572644ULL;
unsigned int var_21 = 1380027228U;
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
