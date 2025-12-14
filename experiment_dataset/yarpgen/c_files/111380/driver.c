#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1231537433;
unsigned short var_2 = (unsigned short)47679;
unsigned long long int var_3 = 15566801557755530143ULL;
unsigned long long int var_5 = 5519034193740758124ULL;
unsigned short var_6 = (unsigned short)50110;
unsigned short var_8 = (unsigned short)46976;
int zero = 0;
unsigned long long int var_11 = 3040776844073380429ULL;
unsigned short var_12 = (unsigned short)41983;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
