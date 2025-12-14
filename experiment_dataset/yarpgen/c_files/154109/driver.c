#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4261167887460155605LL;
short var_8 = (short)11235;
long long int var_9 = -5028673333197615734LL;
int var_11 = 981156162;
_Bool var_12 = (_Bool)0;
short var_15 = (short)3086;
int zero = 0;
short var_17 = (short)8104;
long long int var_18 = -7464308964846700409LL;
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
