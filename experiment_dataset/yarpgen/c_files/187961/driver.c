#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36858;
unsigned int var_9 = 1274529671U;
unsigned short var_12 = (unsigned short)24649;
unsigned char var_13 = (unsigned char)28;
unsigned long long int var_14 = 2522045634109552651ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)26999;
void init() {
}

void checksum() {
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
