#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8611150129953543149LL;
long long int var_1 = 526840891998790996LL;
signed char var_3 = (signed char)113;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)96;
unsigned long long int var_7 = 4136151899748515001ULL;
signed char var_9 = (signed char)61;
int var_10 = -91961384;
signed char var_12 = (signed char)98;
unsigned short var_17 = (unsigned short)12376;
unsigned char var_19 = (unsigned char)49;
int zero = 0;
unsigned long long int var_20 = 562599053433925704ULL;
signed char var_21 = (signed char)-109;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)166;
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
