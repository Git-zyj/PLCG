#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2691254689U;
int var_9 = -922568529;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 4247259673U;
unsigned short var_16 = (unsigned short)31272;
int zero = 0;
int var_17 = -813601046;
signed char var_18 = (signed char)4;
signed char var_19 = (signed char)72;
signed char var_20 = (signed char)-53;
unsigned short var_21 = (unsigned short)57242;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
