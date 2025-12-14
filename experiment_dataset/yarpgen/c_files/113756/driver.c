#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2881422454U;
signed char var_4 = (signed char)-55;
signed char var_5 = (signed char)-28;
long long int var_7 = 7038321416249500933LL;
long long int var_9 = -2232770407903972751LL;
unsigned int var_11 = 76352526U;
int zero = 0;
short var_12 = (short)-6796;
short var_13 = (short)26614;
long long int var_14 = -4563245412811251531LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
