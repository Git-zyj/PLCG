#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15522224214809391877ULL;
unsigned short var_3 = (unsigned short)41150;
unsigned short var_4 = (unsigned short)7832;
short var_5 = (short)-13194;
unsigned int var_9 = 2226809843U;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)237;
long long int var_17 = 3267366033028355765LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 17668535086640093531ULL;
unsigned short var_20 = (unsigned short)31536;
unsigned short var_21 = (unsigned short)13830;
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
