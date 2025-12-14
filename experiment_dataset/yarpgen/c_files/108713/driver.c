#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36931;
signed char var_1 = (signed char)-96;
unsigned long long int var_2 = 13710242442261514150ULL;
int var_3 = 491290220;
signed char var_5 = (signed char)-34;
short var_6 = (short)30416;
unsigned short var_7 = (unsigned short)12776;
unsigned long long int var_8 = 15348595036789908882ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)76;
int zero = 0;
unsigned long long int var_13 = 16481606878475522301ULL;
long long int var_14 = 4688804165978253202LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
