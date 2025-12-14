#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -566176799437459083LL;
unsigned int var_3 = 3464451666U;
unsigned char var_8 = (unsigned char)123;
unsigned char var_9 = (unsigned char)204;
short var_10 = (short)20238;
unsigned char var_18 = (unsigned char)193;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)32746;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 10453411368054866514ULL;
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
