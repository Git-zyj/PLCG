#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)62001;
unsigned short var_8 = (unsigned short)53182;
unsigned short var_9 = (unsigned short)53707;
unsigned char var_12 = (unsigned char)65;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 2434933997117445408ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)50159;
signed char var_18 = (signed char)-117;
unsigned long long int var_19 = 6507240584474445925ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
