#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 813284440U;
unsigned long long int var_3 = 6646954112388995458ULL;
unsigned char var_4 = (unsigned char)9;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_15 = 7308135470066011848ULL;
long long int var_16 = -6880202260277887533LL;
signed char var_17 = (signed char)-28;
unsigned char var_19 = (unsigned char)26;
int zero = 0;
unsigned long long int var_20 = 16089595892419637615ULL;
unsigned short var_21 = (unsigned short)43271;
unsigned long long int var_22 = 17110240457587700311ULL;
unsigned long long int var_23 = 10286774216463100402ULL;
void init() {
}

void checksum() {
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
