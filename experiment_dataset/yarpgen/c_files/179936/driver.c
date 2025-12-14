#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2665731621U;
unsigned short var_2 = (unsigned short)12844;
unsigned int var_3 = 3346487305U;
short var_4 = (short)-24660;
unsigned short var_6 = (unsigned short)23536;
signed char var_7 = (signed char)-54;
long long int var_9 = 5924171705700402710LL;
int zero = 0;
unsigned int var_12 = 978590794U;
unsigned int var_13 = 1105881620U;
int var_14 = 1288063232;
unsigned short var_15 = (unsigned short)7661;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
