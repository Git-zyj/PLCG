#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 785663670U;
unsigned char var_9 = (unsigned char)66;
int var_10 = 234193715;
int var_17 = 1444251609;
int zero = 0;
unsigned int var_18 = 45961633U;
signed char var_19 = (signed char)-30;
unsigned int var_20 = 2716346703U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
