#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22817;
short var_4 = (short)13584;
long long int var_5 = 52996057177092515LL;
short var_9 = (short)15866;
unsigned short var_16 = (unsigned short)38738;
int zero = 0;
unsigned int var_17 = 3389417755U;
long long int var_18 = -5188747795583821535LL;
signed char var_19 = (signed char)3;
unsigned long long int var_20 = 1076428341350658507ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
