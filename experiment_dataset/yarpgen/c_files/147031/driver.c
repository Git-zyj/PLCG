#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)0;
short var_4 = (short)-11833;
short var_5 = (short)-26608;
short var_8 = (short)-23881;
long long int var_9 = 1198876002377474623LL;
signed char var_10 = (signed char)126;
short var_11 = (short)20912;
signed char var_12 = (signed char)105;
signed char var_13 = (signed char)35;
int zero = 0;
signed char var_15 = (signed char)-60;
long long int var_16 = 4379025854358640142LL;
long long int var_17 = -5318923593196430799LL;
signed char var_18 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
