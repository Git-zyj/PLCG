#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)39;
unsigned long long int var_3 = 7915537483371153410ULL;
unsigned char var_5 = (unsigned char)116;
short var_7 = (short)22131;
int var_12 = -2130761394;
int zero = 0;
unsigned long long int var_14 = 1291515222441479235ULL;
long long int var_15 = 5707735937630624788LL;
void init() {
}

void checksum() {
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
