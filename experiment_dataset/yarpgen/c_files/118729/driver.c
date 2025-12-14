#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40590;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-52;
signed char var_8 = (signed char)94;
signed char var_9 = (signed char)-108;
unsigned char var_10 = (unsigned char)33;
int zero = 0;
unsigned long long int var_11 = 2743383354470441113ULL;
long long int var_12 = 2103379113997863114LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
