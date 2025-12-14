#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
signed char var_1 = (signed char)17;
signed char var_4 = (signed char)120;
unsigned int var_9 = 3426183987U;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = 2830606142614240201LL;
unsigned short var_20 = (unsigned short)15559;
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
