#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12974331232510942826ULL;
unsigned long long int var_8 = 16362548629862416588ULL;
short var_10 = (short)6664;
unsigned int var_11 = 187390752U;
unsigned int var_13 = 2053054351U;
unsigned int var_14 = 1502890426U;
int var_16 = -362902085;
int zero = 0;
signed char var_18 = (signed char)-100;
unsigned long long int var_19 = 17554997675580351820ULL;
unsigned long long int var_20 = 5489759901485490736ULL;
unsigned long long int var_21 = 677213356954477401ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
