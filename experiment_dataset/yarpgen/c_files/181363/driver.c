#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3198547720747736726LL;
unsigned char var_2 = (unsigned char)74;
unsigned char var_9 = (unsigned char)241;
unsigned char var_10 = (unsigned char)105;
unsigned char var_13 = (unsigned char)120;
signed char var_14 = (signed char)14;
unsigned char var_16 = (unsigned char)117;
unsigned int var_18 = 690318758U;
int zero = 0;
unsigned short var_19 = (unsigned short)50700;
unsigned long long int var_20 = 12079775482007574017ULL;
unsigned char var_21 = (unsigned char)175;
unsigned char var_22 = (unsigned char)19;
unsigned long long int var_23 = 7165711988037362299ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
