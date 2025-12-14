#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20194;
unsigned long long int var_3 = 7852725836384431003ULL;
unsigned int var_4 = 1499727365U;
unsigned long long int var_9 = 15556895675992505233ULL;
signed char var_10 = (signed char)-43;
int zero = 0;
unsigned long long int var_12 = 11244226522270724145ULL;
unsigned short var_13 = (unsigned short)28560;
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
