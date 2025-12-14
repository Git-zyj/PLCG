#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-49;
long long int var_4 = -3427915013732913695LL;
int var_5 = 1212061784;
long long int var_6 = -6268623406843715503LL;
int var_7 = 1143898014;
short var_9 = (short)27402;
unsigned short var_10 = (unsigned short)6892;
long long int var_11 = -248889705349187890LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -1964984513;
signed char var_14 = (signed char)120;
signed char var_15 = (signed char)-125;
signed char var_16 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
