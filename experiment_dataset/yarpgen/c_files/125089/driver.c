#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)18;
signed char var_7 = (signed char)57;
unsigned char var_9 = (unsigned char)106;
unsigned char var_10 = (unsigned char)52;
int zero = 0;
long long int var_20 = 5693543434755209350LL;
unsigned char var_21 = (unsigned char)242;
unsigned long long int var_22 = 15123733225425639563ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
