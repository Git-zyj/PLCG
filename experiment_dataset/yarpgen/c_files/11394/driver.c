#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1279346041U;
unsigned short var_4 = (unsigned short)33154;
unsigned int var_7 = 1312840834U;
signed char var_9 = (signed char)-37;
int zero = 0;
unsigned char var_11 = (unsigned char)25;
unsigned short var_12 = (unsigned short)25564;
long long int var_13 = 8005953120420205104LL;
void init() {
}

void checksum() {
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
