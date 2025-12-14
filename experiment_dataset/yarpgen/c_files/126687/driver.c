#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1592722599;
unsigned int var_3 = 680059829U;
unsigned long long int var_4 = 4092100831055775587ULL;
signed char var_6 = (signed char)104;
long long int var_9 = -3700808751830481103LL;
unsigned long long int var_11 = 4721388224414144370ULL;
unsigned long long int var_15 = 14315614960177275121ULL;
unsigned char var_16 = (unsigned char)131;
int zero = 0;
unsigned int var_19 = 440622031U;
unsigned int var_20 = 4221277680U;
unsigned long long int var_21 = 4243156669535381782ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
