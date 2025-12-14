#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
unsigned short var_3 = (unsigned short)2910;
short var_4 = (short)19930;
signed char var_6 = (signed char)86;
unsigned long long int var_7 = 7772573911105416155ULL;
long long int var_8 = 1970948231592464989LL;
long long int var_9 = 8460200708972127502LL;
unsigned long long int var_10 = 3553875549667119204ULL;
int zero = 0;
long long int var_11 = -6490332246848591298LL;
unsigned short var_12 = (unsigned short)44950;
unsigned long long int var_13 = 2969638301679523105ULL;
signed char var_14 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
