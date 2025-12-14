#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -483260840;
long long int var_8 = 154839875291326705LL;
unsigned long long int var_12 = 8687470395045057674ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)16934;
int var_19 = 860229320;
long long int var_20 = 710941729007871483LL;
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
