#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 385160418684038118LL;
unsigned short var_5 = (unsigned short)40929;
long long int var_6 = 401861872239007625LL;
short var_9 = (short)-5586;
int zero = 0;
unsigned long long int var_10 = 17467385541435090594ULL;
int var_11 = -1424495818;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
