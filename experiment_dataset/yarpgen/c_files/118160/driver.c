#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14295171385319689907ULL;
unsigned int var_7 = 112042255U;
long long int var_8 = 5350597426580010403LL;
long long int var_9 = -2839481583085745960LL;
short var_10 = (short)28139;
long long int var_14 = -1995390887127689157LL;
int zero = 0;
unsigned int var_19 = 2467766592U;
long long int var_20 = 6716166442119992102LL;
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
