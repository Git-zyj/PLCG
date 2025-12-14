#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2257515451917531713LL;
unsigned char var_1 = (unsigned char)1;
unsigned short var_3 = (unsigned short)12067;
unsigned char var_4 = (unsigned char)243;
unsigned short var_5 = (unsigned short)52653;
long long int var_7 = -1659279722395591289LL;
signed char var_8 = (signed char)-35;
unsigned long long int var_9 = 15718059822333195752ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 18411603708211520824ULL;
int zero = 0;
unsigned long long int var_13 = 4140353935019389183ULL;
_Bool var_14 = (_Bool)0;
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
