#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)202;
signed char var_5 = (signed char)-5;
unsigned short var_6 = (unsigned short)21228;
unsigned short var_8 = (unsigned short)30072;
int zero = 0;
long long int var_10 = 9147594039024094077LL;
long long int var_11 = -5418102685708143914LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
