#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60066;
signed char var_3 = (signed char)120;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1695671672U;
unsigned short var_9 = (unsigned short)31625;
unsigned long long int var_10 = 10231510454883656848ULL;
int zero = 0;
int var_11 = -771429322;
unsigned long long int var_12 = 13183366650424461281ULL;
void init() {
}

void checksum() {
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
