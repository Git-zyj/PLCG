#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)111;
long long int var_4 = -2448297617300080686LL;
unsigned long long int var_5 = 12026734322187111166ULL;
unsigned long long int var_8 = 18132493186490598169ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)39302;
int zero = 0;
unsigned int var_12 = 264805429U;
short var_13 = (short)-6451;
unsigned long long int var_14 = 14953664964113897629ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
