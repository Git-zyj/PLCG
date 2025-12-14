#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)5301;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)52704;
int zero = 0;
unsigned int var_19 = 3112008127U;
int var_20 = -1032237906;
long long int var_21 = -4070403914776623008LL;
void init() {
}

void checksum() {
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
