#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
long long int var_1 = -3332622970271982368LL;
unsigned short var_3 = (unsigned short)15362;
signed char var_4 = (signed char)127;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 12127436326628871070ULL;
int var_9 = -1236769530;
int zero = 0;
signed char var_12 = (signed char)-20;
signed char var_13 = (signed char)24;
unsigned char var_14 = (unsigned char)27;
unsigned short var_15 = (unsigned short)20318;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
