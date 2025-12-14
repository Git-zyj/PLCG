#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15904573857158042570ULL;
unsigned char var_1 = (unsigned char)35;
short var_2 = (short)31196;
unsigned short var_3 = (unsigned short)40726;
long long int var_4 = 4200215683500444026LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)104;
long long int var_11 = -7596255769276710485LL;
int zero = 0;
unsigned short var_16 = (unsigned short)22978;
unsigned short var_17 = (unsigned short)43786;
unsigned char var_18 = (unsigned char)229;
unsigned char var_19 = (unsigned char)187;
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
