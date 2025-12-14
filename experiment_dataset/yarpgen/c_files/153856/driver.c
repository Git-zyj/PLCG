#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -109395566;
signed char var_1 = (signed char)-106;
unsigned short var_3 = (unsigned short)45486;
short var_4 = (short)-20509;
unsigned int var_5 = 1363382453U;
unsigned int var_6 = 3239273497U;
unsigned short var_7 = (unsigned short)41926;
int var_8 = -1919913362;
unsigned int var_9 = 1872789588U;
int zero = 0;
signed char var_10 = (signed char)-60;
unsigned int var_11 = 3333925508U;
unsigned char var_12 = (unsigned char)32;
unsigned long long int var_13 = 10647318231943407340ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
