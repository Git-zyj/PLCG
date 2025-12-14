#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39720;
unsigned int var_4 = 4045583341U;
unsigned int var_13 = 1930250805U;
int zero = 0;
long long int var_17 = -4932867470188720674LL;
unsigned int var_18 = 1162192481U;
unsigned int var_19 = 3736230261U;
unsigned char var_20 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
