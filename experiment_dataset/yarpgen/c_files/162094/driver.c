#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17794165860747893858ULL;
long long int var_2 = -2844012686401044798LL;
int var_3 = 624490270;
unsigned char var_5 = (unsigned char)151;
signed char var_8 = (signed char)-93;
int zero = 0;
unsigned long long int var_12 = 4861586412616907772ULL;
signed char var_13 = (signed char)-10;
void init() {
}

void checksum() {
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
