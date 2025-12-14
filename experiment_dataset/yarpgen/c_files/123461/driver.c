#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4468907543262810114LL;
_Bool var_2 = (_Bool)1;
int var_3 = -1512252078;
unsigned char var_4 = (unsigned char)10;
unsigned char var_6 = (unsigned char)47;
unsigned int var_7 = 584322912U;
signed char var_9 = (signed char)-13;
int zero = 0;
unsigned short var_13 = (unsigned short)22524;
long long int var_14 = -7293774083393429663LL;
long long int var_15 = -4822465957235973661LL;
void init() {
}

void checksum() {
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
