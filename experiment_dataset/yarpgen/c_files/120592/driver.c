#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
unsigned char var_1 = (unsigned char)51;
unsigned int var_3 = 981468842U;
int var_4 = -31133990;
int var_8 = -749288925;
unsigned long long int var_9 = 7007017832301010100ULL;
unsigned short var_11 = (unsigned short)59109;
int var_12 = -1327074887;
int zero = 0;
unsigned short var_13 = (unsigned short)1009;
int var_14 = 1503980295;
long long int var_15 = 1474192402170832480LL;
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
