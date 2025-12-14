#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65524;
long long int var_2 = 5765682472715803205LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 13001329866729380481ULL;
long long int var_17 = -4571606636131323394LL;
unsigned int var_18 = 1670187619U;
int zero = 0;
unsigned int var_19 = 729319850U;
short var_20 = (short)22655;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
