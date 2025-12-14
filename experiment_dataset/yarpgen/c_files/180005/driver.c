#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)26;
long long int var_8 = -6628870063301451203LL;
int zero = 0;
unsigned char var_12 = (unsigned char)126;
short var_13 = (short)-31211;
int var_14 = -916388621;
unsigned long long int var_15 = 13963816197987317866ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
