#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 279499439;
int var_6 = 1384539254;
unsigned char var_9 = (unsigned char)106;
int var_14 = -902692119;
_Bool var_16 = (_Bool)1;
unsigned char var_18 = (unsigned char)217;
int zero = 0;
signed char var_19 = (signed char)98;
unsigned char var_20 = (unsigned char)253;
unsigned int var_21 = 702116372U;
long long int var_22 = -5590127077582548619LL;
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
