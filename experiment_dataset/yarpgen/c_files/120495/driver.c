#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5676845087825392435LL;
long long int var_4 = 4652626604050454184LL;
int var_6 = 1042827771;
unsigned int var_10 = 1212325807U;
unsigned long long int var_12 = 562512400118942870ULL;
int zero = 0;
long long int var_13 = -7684360356998793558LL;
short var_14 = (short)31974;
unsigned long long int var_15 = 10051532153092356989ULL;
unsigned char var_16 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
