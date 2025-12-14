#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 5279490536340711179ULL;
unsigned int var_4 = 2621544835U;
long long int var_5 = -4241163400249539810LL;
unsigned int var_7 = 351369670U;
signed char var_8 = (signed char)-120;
short var_10 = (short)13064;
int zero = 0;
unsigned char var_12 = (unsigned char)155;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)54954;
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
