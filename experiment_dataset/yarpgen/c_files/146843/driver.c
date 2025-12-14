#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
unsigned short var_1 = (unsigned short)61731;
unsigned long long int var_2 = 11742659098253918797ULL;
unsigned long long int var_3 = 559541481092356035ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 2585427515693563089LL;
unsigned short var_6 = (unsigned short)53044;
int var_7 = 521214355;
short var_8 = (short)-21194;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 902852014432342868ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)143;
signed char var_12 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
