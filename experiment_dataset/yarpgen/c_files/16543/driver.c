#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
int var_3 = -629193895;
short var_5 = (short)8003;
unsigned short var_6 = (unsigned short)35287;
signed char var_7 = (signed char)-55;
unsigned short var_8 = (unsigned short)13290;
int var_9 = 662638914;
int zero = 0;
int var_10 = 13549392;
unsigned char var_11 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
