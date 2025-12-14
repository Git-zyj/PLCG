#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-15;
short var_2 = (short)3332;
long long int var_4 = -5403647030096560111LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
long long int var_8 = -1516291658085988808LL;
int var_9 = 1986464065;
short var_10 = (short)-12304;
int zero = 0;
signed char var_11 = (signed char)-25;
long long int var_12 = 1233425824177108483LL;
short var_13 = (short)23751;
short var_14 = (short)-25834;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
