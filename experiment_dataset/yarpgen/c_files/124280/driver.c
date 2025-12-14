#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)40;
unsigned long long int var_9 = 3176726751596974903ULL;
short var_11 = (short)-7927;
short var_13 = (short)20758;
int zero = 0;
unsigned int var_20 = 3388647634U;
signed char var_21 = (signed char)-109;
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
