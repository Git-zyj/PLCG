#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1924168044;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)24295;
unsigned int var_6 = 260068695U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)118;
signed char var_10 = (signed char)-58;
unsigned long long int var_11 = 17964083626346191920ULL;
int zero = 0;
unsigned long long int var_13 = 2054034547795513170ULL;
int var_14 = 1674761249;
void init() {
}

void checksum() {
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
