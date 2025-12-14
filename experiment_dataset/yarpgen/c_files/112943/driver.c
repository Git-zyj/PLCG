#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 4138223584U;
unsigned int var_7 = 2954221971U;
unsigned int var_9 = 604521833U;
unsigned long long int var_11 = 2898867242993651321ULL;
unsigned char var_13 = (unsigned char)7;
unsigned short var_18 = (unsigned short)5021;
int zero = 0;
unsigned int var_19 = 1138430608U;
long long int var_20 = 350942132494979983LL;
unsigned short var_21 = (unsigned short)36155;
long long int var_22 = -4264570305306075068LL;
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
