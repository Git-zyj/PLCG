#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)893;
_Bool var_1 = (_Bool)1;
int var_4 = 1943859285;
long long int var_12 = 3688853801080507541LL;
int var_19 = -1288116915;
int zero = 0;
unsigned int var_20 = 2651411645U;
unsigned char var_21 = (unsigned char)88;
short var_22 = (short)25370;
int var_23 = -1352777583;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
