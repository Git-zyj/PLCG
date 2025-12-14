#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 17338225;
unsigned long long int var_2 = 10817109801996909379ULL;
signed char var_3 = (signed char)59;
int var_4 = 570813921;
unsigned int var_5 = 1547176655U;
unsigned char var_6 = (unsigned char)101;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 10730254150643418689ULL;
int zero = 0;
signed char var_10 = (signed char)-90;
long long int var_11 = -5774889101840498293LL;
int var_12 = -1135839448;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
