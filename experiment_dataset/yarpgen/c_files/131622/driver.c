#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-82;
unsigned char var_3 = (unsigned char)187;
unsigned int var_4 = 900581967U;
signed char var_6 = (signed char)-40;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)28;
int zero = 0;
long long int var_11 = 2862922615089423941LL;
unsigned short var_12 = (unsigned short)1633;
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
