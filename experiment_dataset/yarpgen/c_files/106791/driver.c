#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)125;
unsigned short var_5 = (unsigned short)55339;
int var_6 = -425844760;
unsigned short var_9 = (unsigned short)45002;
unsigned char var_11 = (unsigned char)213;
int zero = 0;
unsigned char var_18 = (unsigned char)141;
unsigned short var_19 = (unsigned short)57656;
unsigned long long int var_20 = 18214224219332728445ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
