#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2591672717U;
long long int var_9 = -1357441054785692273LL;
int zero = 0;
unsigned short var_19 = (unsigned short)47189;
int var_20 = 1203731483;
int var_21 = 1138898585;
short var_22 = (short)-12264;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
