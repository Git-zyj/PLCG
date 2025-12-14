#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
unsigned short var_1 = (unsigned short)5059;
unsigned short var_2 = (unsigned short)49878;
unsigned char var_3 = (unsigned char)246;
int var_7 = -902917127;
unsigned long long int var_10 = 10939824906544116407ULL;
unsigned short var_14 = (unsigned short)60352;
int zero = 0;
long long int var_15 = -1095526693076312560LL;
unsigned short var_16 = (unsigned short)15218;
unsigned short var_17 = (unsigned short)27724;
int var_18 = 1692215834;
long long int var_19 = -1195945232713788619LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
