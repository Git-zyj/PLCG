#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15327920069968447473ULL;
unsigned long long int var_7 = 12564296309671781949ULL;
long long int var_8 = -8199264654326639751LL;
unsigned long long int var_13 = 13584464137272936150ULL;
short var_16 = (short)29927;
int zero = 0;
short var_17 = (short)-5859;
long long int var_18 = 4788865074981094124LL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 4569150952416380508ULL;
short var_21 = (short)-24731;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
