#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42741;
long long int var_8 = 6290824026086494101LL;
unsigned short var_9 = (unsigned short)11333;
long long int var_10 = 7470678727744683145LL;
int zero = 0;
unsigned short var_11 = (unsigned short)57429;
unsigned short var_12 = (unsigned short)4183;
unsigned short var_13 = (unsigned short)24096;
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
