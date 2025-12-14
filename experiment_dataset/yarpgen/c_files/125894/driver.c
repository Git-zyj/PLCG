#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 808267055;
int var_4 = -1989943180;
int var_5 = 1427373650;
short var_8 = (short)1543;
int var_9 = -1418099260;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 571519377;
short var_14 = (short)7713;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
