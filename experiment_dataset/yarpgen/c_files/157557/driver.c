#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4002092368U;
signed char var_4 = (signed char)32;
signed char var_6 = (signed char)-106;
unsigned long long int var_8 = 1637533315421913399ULL;
unsigned long long int var_10 = 8606011980301787870ULL;
unsigned int var_19 = 389998131U;
int zero = 0;
unsigned long long int var_20 = 2999340003501245293ULL;
unsigned short var_21 = (unsigned short)41284;
unsigned long long int var_22 = 8541025438537034283ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
