#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)208;
unsigned long long int var_8 = 9376092782848523003ULL;
unsigned long long int var_9 = 3663302184355896837ULL;
signed char var_14 = (signed char)-70;
int zero = 0;
short var_17 = (short)27217;
unsigned long long int var_18 = 17261807842377799276ULL;
signed char var_19 = (signed char)23;
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
