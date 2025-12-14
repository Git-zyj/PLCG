#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1902254595441848925ULL;
long long int var_2 = 9096805283071253966LL;
int var_3 = -1865642674;
int var_14 = -1025182546;
unsigned short var_15 = (unsigned short)15410;
int zero = 0;
int var_18 = 968684021;
signed char var_19 = (signed char)103;
unsigned long long int var_20 = 655173605601105691ULL;
unsigned long long int var_21 = 17678281830199398661ULL;
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
