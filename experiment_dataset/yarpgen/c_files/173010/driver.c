#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)245;
unsigned char var_6 = (unsigned char)77;
unsigned long long int var_7 = 580364623381755880ULL;
unsigned long long int var_8 = 15882637031497143626ULL;
unsigned char var_9 = (unsigned char)125;
unsigned char var_10 = (unsigned char)91;
_Bool var_16 = (_Bool)0;
int var_17 = 944901145;
int zero = 0;
signed char var_18 = (signed char)-23;
long long int var_19 = 7857853793961371546LL;
int var_20 = 1430666013;
long long int var_21 = 1407078160573596371LL;
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
