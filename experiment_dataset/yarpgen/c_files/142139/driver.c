#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)44;
unsigned long long int var_6 = 10723851636934197824ULL;
long long int var_9 = -7412558180690979150LL;
unsigned short var_11 = (unsigned short)18381;
int zero = 0;
short var_13 = (short)-31342;
long long int var_14 = 8673829538031261167LL;
int var_15 = 983770414;
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
