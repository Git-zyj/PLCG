#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2571816206483396945LL;
unsigned long long int var_3 = 5226727038604568509ULL;
unsigned char var_4 = (unsigned char)190;
unsigned char var_7 = (unsigned char)107;
unsigned short var_9 = (unsigned short)27811;
unsigned char var_12 = (unsigned char)5;
int zero = 0;
unsigned int var_15 = 1882665450U;
long long int var_16 = -7372910625370417376LL;
signed char var_17 = (signed char)83;
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
