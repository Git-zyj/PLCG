#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3874319327286003794LL;
int var_4 = -1807935574;
unsigned long long int var_6 = 3489997314746971308ULL;
long long int var_8 = -7204544257956141983LL;
unsigned long long int var_17 = 12287000633465268908ULL;
int zero = 0;
short var_19 = (short)-27157;
int var_20 = -1957148882;
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
