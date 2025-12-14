#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43467;
unsigned short var_1 = (unsigned short)41158;
unsigned int var_2 = 3926700594U;
unsigned char var_4 = (unsigned char)101;
unsigned char var_5 = (unsigned char)191;
unsigned short var_8 = (unsigned short)31926;
signed char var_9 = (signed char)-74;
signed char var_11 = (signed char)-3;
int zero = 0;
signed char var_12 = (signed char)44;
signed char var_13 = (signed char)109;
unsigned int var_14 = 42441371U;
unsigned int var_15 = 1637526763U;
int var_16 = -2118893798;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
