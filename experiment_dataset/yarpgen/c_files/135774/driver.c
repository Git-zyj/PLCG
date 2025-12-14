#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1808030419U;
unsigned char var_3 = (unsigned char)180;
unsigned char var_5 = (unsigned char)217;
unsigned char var_9 = (unsigned char)22;
int zero = 0;
int var_10 = 832460803;
signed char var_11 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
