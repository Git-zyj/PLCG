#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
int var_1 = -1159191715;
_Bool var_3 = (_Bool)1;
int var_4 = 119232004;
long long int var_5 = 5107828274787110999LL;
long long int var_7 = 3199301445743811078LL;
int var_9 = -1684654405;
int var_10 = 1158063808;
int var_11 = 448513644;
short var_12 = (short)15838;
_Bool var_13 = (_Bool)0;
unsigned char var_17 = (unsigned char)28;
int zero = 0;
int var_19 = -1957052600;
unsigned char var_20 = (unsigned char)179;
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
