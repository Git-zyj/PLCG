#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)179;
signed char var_3 = (signed char)-11;
unsigned char var_7 = (unsigned char)217;
unsigned long long int var_9 = 4712594155800845769ULL;
unsigned char var_10 = (unsigned char)229;
int var_13 = -569634877;
int zero = 0;
unsigned long long int var_15 = 9460474337227039700ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
