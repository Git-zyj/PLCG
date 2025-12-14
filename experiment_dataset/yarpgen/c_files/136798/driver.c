#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41111;
unsigned long long int var_4 = 12329010713800003788ULL;
signed char var_5 = (signed char)-98;
unsigned char var_8 = (unsigned char)70;
short var_9 = (short)-27382;
unsigned long long int var_17 = 14317894840809725456ULL;
int zero = 0;
short var_19 = (short)-18004;
short var_20 = (short)-7998;
long long int var_21 = 5775278274592169740LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
