#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1847062388905438059LL;
unsigned long long int var_11 = 6976964758749091023ULL;
signed char var_12 = (signed char)41;
_Bool var_13 = (_Bool)1;
short var_14 = (short)7306;
int zero = 0;
unsigned long long int var_16 = 1684955047505705684ULL;
unsigned int var_17 = 3000242962U;
int var_18 = -1505319384;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
