#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1825785219;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)50439;
signed char var_13 = (signed char)-34;
unsigned short var_14 = (unsigned short)4272;
int zero = 0;
int var_20 = -1786737667;
int var_21 = -154804756;
long long int var_22 = -4559510766892464727LL;
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
