#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)137;
int var_5 = -134335065;
short var_8 = (short)14351;
unsigned short var_9 = (unsigned short)40609;
unsigned long long int var_10 = 12672425004938379581ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)155;
int var_12 = 103129389;
unsigned short var_13 = (unsigned short)44986;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
