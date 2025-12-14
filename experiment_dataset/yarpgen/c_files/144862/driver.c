#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1113671823U;
unsigned char var_1 = (unsigned char)219;
unsigned long long int var_2 = 12817506652995292351ULL;
short var_3 = (short)-29820;
unsigned long long int var_4 = 11588259400469527838ULL;
int var_6 = -121239097;
unsigned long long int var_8 = 16246626239465645244ULL;
short var_9 = (short)10795;
int zero = 0;
short var_10 = (short)-7896;
short var_11 = (short)-1859;
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
