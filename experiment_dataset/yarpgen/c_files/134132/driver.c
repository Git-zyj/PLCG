#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18214118038395540490ULL;
_Bool var_4 = (_Bool)0;
signed char var_9 = (signed char)92;
signed char var_11 = (signed char)71;
unsigned short var_12 = (unsigned short)47031;
short var_15 = (short)28344;
int zero = 0;
unsigned char var_17 = (unsigned char)217;
unsigned short var_18 = (unsigned short)16947;
unsigned int var_19 = 3537185099U;
unsigned char var_20 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
