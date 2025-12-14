#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3524986149747924946LL;
short var_7 = (short)-15109;
_Bool var_8 = (_Bool)1;
long long int var_9 = -6638095291364217925LL;
unsigned int var_11 = 1887353959U;
int zero = 0;
unsigned char var_17 = (unsigned char)35;
long long int var_18 = 2661266032732235571LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
