#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1999122702;
unsigned long long int var_3 = 5811373645388549052ULL;
unsigned long long int var_4 = 5327673551998329018ULL;
unsigned short var_7 = (unsigned short)36453;
signed char var_10 = (signed char)42;
int var_12 = -377719640;
int var_13 = -240607791;
signed char var_14 = (signed char)-52;
unsigned long long int var_15 = 2472426172159243705ULL;
int zero = 0;
unsigned int var_16 = 3257015122U;
unsigned short var_17 = (unsigned short)4045;
int var_18 = 4716314;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
