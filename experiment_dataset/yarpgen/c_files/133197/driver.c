#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 518274582U;
signed char var_4 = (signed char)-1;
int var_7 = -1917509318;
unsigned int var_8 = 4137739288U;
int zero = 0;
int var_10 = -715780511;
long long int var_11 = -7187978328233508292LL;
int var_12 = 1665720457;
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
