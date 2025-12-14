#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)31;
signed char var_6 = (signed char)-119;
unsigned int var_9 = 3443346545U;
short var_10 = (short)-4572;
long long int var_11 = -6482358651456706531LL;
unsigned char var_12 = (unsigned char)217;
int zero = 0;
unsigned char var_15 = (unsigned char)41;
unsigned char var_16 = (unsigned char)168;
int var_17 = 537834723;
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
