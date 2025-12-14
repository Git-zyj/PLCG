#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7589802481931843861LL;
long long int var_3 = -3861777605817508391LL;
long long int var_5 = 3205878022345320882LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -5614505584463940876LL;
int zero = 0;
signed char var_13 = (signed char)41;
signed char var_14 = (signed char)62;
void init() {
}

void checksum() {
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
