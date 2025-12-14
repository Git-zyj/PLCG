#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 3931621810975465689LL;
unsigned char var_3 = (unsigned char)79;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)255;
int var_9 = -213831288;
signed char var_10 = (signed char)-75;
unsigned int var_12 = 1186155330U;
unsigned short var_14 = (unsigned short)51097;
unsigned short var_15 = (unsigned short)3367;
int zero = 0;
unsigned char var_17 = (unsigned char)89;
signed char var_18 = (signed char)47;
unsigned char var_19 = (unsigned char)195;
unsigned char var_20 = (unsigned char)138;
unsigned short var_21 = (unsigned short)24975;
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
