#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)27335;
unsigned long long int var_13 = 5489192375384935261ULL;
unsigned short var_18 = (unsigned short)52681;
int zero = 0;
short var_19 = (short)-10823;
unsigned int var_20 = 4138591166U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
