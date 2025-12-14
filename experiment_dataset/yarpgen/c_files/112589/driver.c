#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2107087708U;
signed char var_3 = (signed char)93;
unsigned char var_4 = (unsigned char)183;
long long int var_7 = 3269501924923968584LL;
signed char var_18 = (signed char)-110;
unsigned short var_19 = (unsigned short)25013;
int zero = 0;
unsigned int var_20 = 2282528456U;
signed char var_21 = (signed char)90;
unsigned short var_22 = (unsigned short)36789;
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
