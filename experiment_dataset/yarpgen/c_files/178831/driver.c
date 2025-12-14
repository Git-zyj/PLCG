#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 858837179U;
unsigned long long int var_3 = 18071508582303119071ULL;
unsigned char var_6 = (unsigned char)143;
unsigned short var_11 = (unsigned short)40101;
unsigned short var_19 = (unsigned short)25856;
int zero = 0;
unsigned short var_20 = (unsigned short)45690;
int var_21 = 1639234266;
unsigned char var_22 = (unsigned char)187;
void init() {
}

void checksum() {
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
