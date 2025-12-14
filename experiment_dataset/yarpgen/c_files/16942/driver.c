#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29467;
short var_1 = (short)31096;
unsigned short var_5 = (unsigned short)12458;
unsigned long long int var_7 = 18138377994406503043ULL;
unsigned char var_8 = (unsigned char)66;
signed char var_9 = (signed char)-57;
unsigned char var_16 = (unsigned char)217;
int zero = 0;
unsigned char var_20 = (unsigned char)18;
unsigned short var_21 = (unsigned short)41061;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
