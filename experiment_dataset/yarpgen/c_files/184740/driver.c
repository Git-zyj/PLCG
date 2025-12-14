#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -751079974;
int var_1 = 915362507;
short var_3 = (short)18880;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)13991;
signed char var_9 = (signed char)38;
int zero = 0;
long long int var_11 = 1057295594275952823LL;
unsigned int var_12 = 339008910U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
