#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
unsigned short var_1 = (unsigned short)60412;
signed char var_2 = (signed char)-109;
long long int var_3 = -5477307653801520909LL;
unsigned char var_4 = (unsigned char)101;
unsigned int var_5 = 173649744U;
signed char var_6 = (signed char)-59;
unsigned char var_7 = (unsigned char)165;
unsigned long long int var_8 = 7034486665983522150ULL;
unsigned short var_9 = (unsigned short)29201;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4273754742U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
