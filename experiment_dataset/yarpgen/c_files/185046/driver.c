#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3491500955728758280LL;
long long int var_9 = 4755946605904899191LL;
unsigned char var_11 = (unsigned char)62;
unsigned int var_12 = 4238735848U;
long long int var_13 = -6728426016919418959LL;
signed char var_14 = (signed char)-26;
long long int var_15 = -3719586209228319254LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 1714534748938394542LL;
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
