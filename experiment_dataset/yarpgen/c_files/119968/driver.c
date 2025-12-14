#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)67;
int var_2 = -1466607699;
unsigned char var_7 = (unsigned char)159;
unsigned char var_8 = (unsigned char)23;
long long int var_10 = 3016157196224423205LL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 13533867167584452922ULL;
int zero = 0;
short var_17 = (short)-24330;
signed char var_18 = (signed char)-10;
int var_19 = -417904302;
int var_20 = -331318249;
short var_21 = (short)27539;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
