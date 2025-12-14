#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)120;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 9092846893736297721ULL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)7;
int zero = 0;
unsigned int var_20 = 2668268191U;
unsigned short var_21 = (unsigned short)22228;
void init() {
}

void checksum() {
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
