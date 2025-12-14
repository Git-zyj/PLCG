#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7059170569204909833ULL;
unsigned char var_2 = (unsigned char)158;
int var_3 = -1134066513;
unsigned char var_4 = (unsigned char)244;
long long int var_8 = -1275343683280707701LL;
unsigned long long int var_9 = 5178318641745001474ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)66;
unsigned char var_12 = (unsigned char)32;
long long int var_13 = -1288932726990976294LL;
long long int var_14 = -528126704420553191LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
