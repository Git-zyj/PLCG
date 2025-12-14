#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2261876426736925908LL;
unsigned int var_3 = 1876397034U;
int var_4 = 275185329;
unsigned int var_5 = 540335371U;
unsigned short var_6 = (unsigned short)47312;
long long int var_7 = -3190210943924553858LL;
unsigned long long int var_8 = 10219469373989901667ULL;
unsigned long long int var_9 = 12811355401554542962ULL;
int var_10 = 859879975;
int zero = 0;
unsigned int var_11 = 3622331472U;
unsigned long long int var_12 = 10072232865891030994ULL;
int var_13 = -775563392;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
