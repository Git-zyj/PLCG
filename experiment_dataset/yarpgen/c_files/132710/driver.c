#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7217178794801340907ULL;
long long int var_4 = -4698513794811892642LL;
unsigned int var_8 = 1925280752U;
unsigned int var_9 = 4139353852U;
short var_11 = (short)2384;
unsigned short var_15 = (unsigned short)46346;
int zero = 0;
unsigned int var_16 = 2305336394U;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
long long int var_19 = 545268197883084023LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
