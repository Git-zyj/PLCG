#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -260583415;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 17589677961559784547ULL;
unsigned int var_9 = 3685039083U;
unsigned long long int var_10 = 13140317499524089016ULL;
int zero = 0;
unsigned long long int var_12 = 7327570726478346872ULL;
unsigned char var_13 = (unsigned char)109;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)55099;
int var_16 = 278180637;
unsigned short var_17 = (unsigned short)36979;
unsigned int var_18 = 2510174272U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
