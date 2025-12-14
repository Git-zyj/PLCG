#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12753;
short var_2 = (short)-14365;
unsigned long long int var_3 = 9123416717205765315ULL;
unsigned long long int var_4 = 6952420234336916214ULL;
unsigned short var_6 = (unsigned short)64359;
unsigned short var_7 = (unsigned short)51377;
short var_9 = (short)13371;
int zero = 0;
unsigned int var_10 = 2678869374U;
short var_11 = (short)18680;
unsigned short var_12 = (unsigned short)1635;
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
