#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7396685672558547392ULL;
long long int var_1 = -3484427275420373080LL;
unsigned char var_3 = (unsigned char)51;
signed char var_5 = (signed char)-112;
unsigned char var_7 = (unsigned char)43;
signed char var_8 = (signed char)120;
signed char var_13 = (signed char)-72;
int zero = 0;
unsigned int var_18 = 1604055550U;
unsigned int var_19 = 2064977122U;
long long int var_20 = -7381765541432632254LL;
short var_21 = (short)16482;
unsigned int var_22 = 274630598U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
