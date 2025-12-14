#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
unsigned char var_3 = (unsigned char)55;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-3446;
short var_7 = (short)22393;
_Bool var_8 = (_Bool)1;
long long int var_9 = 8042577624551537299LL;
int zero = 0;
int var_12 = 1916155350;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
