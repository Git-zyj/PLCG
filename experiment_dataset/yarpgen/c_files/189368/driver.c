#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)10060;
unsigned long long int var_9 = 15374408176883942200ULL;
unsigned short var_11 = (unsigned short)13033;
int zero = 0;
long long int var_20 = -8310969610186789388LL;
signed char var_21 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
