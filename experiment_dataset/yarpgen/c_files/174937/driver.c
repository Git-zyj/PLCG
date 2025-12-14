#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 463167996U;
unsigned int var_5 = 3626607918U;
unsigned short var_6 = (unsigned short)13919;
short var_7 = (short)9502;
long long int var_8 = -6168980976894387539LL;
unsigned short var_9 = (unsigned short)33185;
int zero = 0;
signed char var_10 = (signed char)-121;
long long int var_11 = -7032516045090083531LL;
unsigned short var_12 = (unsigned short)20732;
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
