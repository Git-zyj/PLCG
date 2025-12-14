#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1731;
unsigned int var_1 = 1238896885U;
_Bool var_5 = (_Bool)0;
int var_9 = -1596447462;
signed char var_11 = (signed char)-75;
unsigned char var_12 = (unsigned char)161;
unsigned short var_14 = (unsigned short)31317;
int zero = 0;
long long int var_16 = 4795457372680107066LL;
unsigned long long int var_17 = 17275002129933403134ULL;
long long int var_18 = 4940693127589322090LL;
unsigned long long int var_19 = 5957810755006330000ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
