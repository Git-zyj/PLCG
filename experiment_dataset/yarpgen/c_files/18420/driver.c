#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1403604160U;
int var_2 = 1107956408;
unsigned int var_3 = 1067046262U;
signed char var_5 = (signed char)-95;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)19878;
unsigned long long int var_9 = 4657231882998556683ULL;
short var_10 = (short)8616;
long long int var_12 = -5277071388408624396LL;
long long int var_13 = 5709462664643472469LL;
int zero = 0;
unsigned long long int var_14 = 1028227529789576048ULL;
long long int var_15 = -5712732991926672713LL;
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
