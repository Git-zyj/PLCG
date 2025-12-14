#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4053119038538689014LL;
long long int var_2 = -3103885143282419652LL;
long long int var_3 = -6892218859158110277LL;
unsigned short var_5 = (unsigned short)47678;
unsigned short var_6 = (unsigned short)63038;
long long int var_8 = 2854130991242871823LL;
unsigned short var_9 = (unsigned short)33045;
int zero = 0;
long long int var_10 = -5325980458479054931LL;
unsigned short var_11 = (unsigned short)8785;
long long int var_12 = -1577882862302703302LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
