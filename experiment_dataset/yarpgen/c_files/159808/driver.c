#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)39;
signed char var_9 = (signed char)-124;
long long int var_10 = 2032174510682906260LL;
unsigned short var_12 = (unsigned short)26266;
long long int var_13 = 8047500690690595092LL;
signed char var_14 = (signed char)-109;
int zero = 0;
signed char var_18 = (signed char)110;
signed char var_19 = (signed char)-55;
unsigned short var_20 = (unsigned short)16395;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
