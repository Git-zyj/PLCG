#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3442879304U;
long long int var_3 = -1236074687557832289LL;
unsigned int var_5 = 2137403171U;
signed char var_7 = (signed char)-105;
unsigned char var_9 = (unsigned char)94;
unsigned int var_10 = 143213258U;
unsigned int var_14 = 2264629716U;
int zero = 0;
unsigned int var_15 = 639972682U;
unsigned int var_16 = 719741804U;
signed char var_17 = (signed char)42;
signed char var_18 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
