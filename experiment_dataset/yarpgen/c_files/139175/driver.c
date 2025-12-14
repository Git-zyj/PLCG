#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7023236618793725269LL;
signed char var_7 = (signed char)48;
long long int var_8 = -2107905258039232975LL;
signed char var_12 = (signed char)9;
long long int var_17 = -7203556911352243687LL;
int zero = 0;
unsigned short var_20 = (unsigned short)45953;
long long int var_21 = -4235285933219932937LL;
unsigned char var_22 = (unsigned char)85;
long long int var_23 = 2716345962614373868LL;
unsigned short var_24 = (unsigned short)7707;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
