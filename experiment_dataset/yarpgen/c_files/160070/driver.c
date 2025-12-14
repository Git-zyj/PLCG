#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
unsigned short var_3 = (unsigned short)44744;
signed char var_5 = (signed char)-67;
unsigned long long int var_10 = 10594872835261307237ULL;
int zero = 0;
long long int var_13 = 623618747543717018LL;
unsigned long long int var_14 = 8953113330629161819ULL;
void init() {
}

void checksum() {
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
