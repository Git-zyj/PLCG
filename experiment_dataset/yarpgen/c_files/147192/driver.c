#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8868663455546875393ULL;
short var_1 = (short)5088;
short var_4 = (short)11623;
long long int var_5 = 4651327684449273473LL;
long long int var_8 = -3723692212054427569LL;
unsigned char var_9 = (unsigned char)106;
signed char var_10 = (signed char)23;
unsigned char var_11 = (unsigned char)204;
int zero = 0;
signed char var_12 = (signed char)22;
signed char var_13 = (signed char)6;
unsigned short var_14 = (unsigned short)44965;
long long int var_15 = -7499179459134151110LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
