#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2779130313U;
long long int var_2 = 3725129567216865677LL;
signed char var_3 = (signed char)72;
unsigned char var_4 = (unsigned char)202;
unsigned short var_5 = (unsigned short)24924;
unsigned char var_6 = (unsigned char)82;
unsigned int var_10 = 625584589U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 11225764362815089146ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
