#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 247967835U;
signed char var_3 = (signed char)30;
long long int var_8 = -5719507514861123363LL;
long long int var_9 = -7098746355477549074LL;
unsigned short var_12 = (unsigned short)46389;
int var_16 = -757926222;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -1181532583;
signed char var_22 = (signed char)-112;
unsigned char var_23 = (unsigned char)163;
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
