#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17025095491717141470ULL;
signed char var_7 = (signed char)-98;
unsigned short var_8 = (unsigned short)22821;
signed char var_9 = (signed char)118;
unsigned int var_10 = 804253767U;
long long int var_12 = -4560960959971327952LL;
int zero = 0;
unsigned long long int var_15 = 17398244363642656943ULL;
signed char var_16 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
