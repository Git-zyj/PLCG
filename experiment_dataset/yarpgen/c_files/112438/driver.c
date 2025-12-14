#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8156630659408570067LL;
signed char var_5 = (signed char)-15;
unsigned char var_6 = (unsigned char)39;
long long int var_9 = 4092173199743702783LL;
signed char var_12 = (signed char)97;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -1784016409;
short var_19 = (short)-2846;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
