#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 678528792650745472ULL;
unsigned int var_5 = 3789469817U;
unsigned char var_12 = (unsigned char)25;
unsigned char var_17 = (unsigned char)205;
unsigned long long int var_18 = 17135487285996181709ULL;
unsigned int var_19 = 3628262659U;
int zero = 0;
int var_20 = 2012925856;
unsigned int var_21 = 487324472U;
unsigned long long int var_22 = 16778536494824913547ULL;
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
