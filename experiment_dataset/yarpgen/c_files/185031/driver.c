#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -880313856;
signed char var_5 = (signed char)-7;
short var_7 = (short)8420;
unsigned short var_8 = (unsigned short)16002;
signed char var_10 = (signed char)78;
long long int var_13 = -6072964815376619293LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-98;
short var_18 = (short)-16405;
int var_19 = 146438855;
unsigned long long int var_20 = 8701576607400589101ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
