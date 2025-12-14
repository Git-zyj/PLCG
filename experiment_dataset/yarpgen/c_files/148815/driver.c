#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)5520;
long long int var_5 = -5915017722943831071LL;
int var_6 = -847541900;
signed char var_9 = (signed char)-58;
signed char var_10 = (signed char)-61;
int zero = 0;
unsigned short var_13 = (unsigned short)55079;
signed char var_14 = (signed char)-100;
signed char var_15 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
