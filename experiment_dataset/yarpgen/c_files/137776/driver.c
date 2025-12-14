#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -2805120355427985387LL;
unsigned char var_3 = (unsigned char)248;
long long int var_4 = 459725374500266126LL;
unsigned long long int var_5 = 5928322129558880917ULL;
unsigned char var_8 = (unsigned char)136;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)213;
long long int var_11 = -4510138773763657112LL;
int zero = 0;
unsigned char var_17 = (unsigned char)187;
unsigned char var_18 = (unsigned char)208;
signed char var_19 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
