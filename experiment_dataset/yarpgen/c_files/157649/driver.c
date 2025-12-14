#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2665;
signed char var_2 = (signed char)-106;
unsigned char var_4 = (unsigned char)234;
signed char var_5 = (signed char)-42;
unsigned long long int var_8 = 15512341721523861386ULL;
unsigned long long int var_12 = 18408279769861340227ULL;
long long int var_14 = -3620120463483911846LL;
int var_16 = -358082128;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 69758147;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
