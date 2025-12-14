#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23751;
unsigned int var_3 = 1514105592U;
unsigned short var_9 = (unsigned short)5289;
unsigned long long int var_15 = 12784137724411320786ULL;
signed char var_16 = (signed char)-106;
int zero = 0;
unsigned char var_19 = (unsigned char)14;
long long int var_20 = 5191838684078692505LL;
signed char var_21 = (signed char)102;
long long int var_22 = 6817112740999682221LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
