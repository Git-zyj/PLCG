#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30701;
unsigned short var_1 = (unsigned short)13749;
int var_3 = -1858362656;
unsigned short var_5 = (unsigned short)51666;
int var_7 = 1273903445;
int var_9 = -490332720;
unsigned short var_10 = (unsigned short)39107;
int zero = 0;
int var_12 = 296706140;
int var_13 = -1747982005;
void init() {
}

void checksum() {
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
