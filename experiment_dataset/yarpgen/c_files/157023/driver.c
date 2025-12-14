#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 971165559;
unsigned char var_3 = (unsigned char)125;
unsigned char var_4 = (unsigned char)98;
unsigned long long int var_5 = 5460701463986674354ULL;
int var_6 = -984490803;
int var_8 = 489339188;
signed char var_9 = (signed char)118;
_Bool var_11 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 8143397788109062393ULL;
int zero = 0;
unsigned long long int var_18 = 5630880051756836596ULL;
long long int var_19 = -5652408899858271503LL;
int var_20 = 1209326954;
unsigned long long int var_21 = 1213021066161637062ULL;
void init() {
}

void checksum() {
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
