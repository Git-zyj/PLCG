#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)60745;
unsigned char var_5 = (unsigned char)31;
signed char var_8 = (signed char)6;
int var_10 = -1638376209;
long long int var_12 = 274458492375799694LL;
long long int var_17 = -410669664671330847LL;
int zero = 0;
short var_19 = (short)-1743;
signed char var_20 = (signed char)-61;
unsigned long long int var_21 = 17770006566302741795ULL;
unsigned short var_22 = (unsigned short)41241;
unsigned long long int var_23 = 340858774019582382ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
