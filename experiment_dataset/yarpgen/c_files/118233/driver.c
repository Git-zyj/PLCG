#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17322249077224853138ULL;
short var_4 = (short)-32716;
unsigned short var_6 = (unsigned short)60455;
unsigned long long int var_8 = 15240266801442003143ULL;
int var_9 = 810918000;
unsigned int var_10 = 1521416897U;
int zero = 0;
long long int var_12 = 5834330296805437696LL;
unsigned long long int var_13 = 15392366539932710638ULL;
int var_14 = 960532612;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
