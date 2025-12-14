#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 986945168;
short var_8 = (short)10109;
unsigned int var_10 = 1042381248U;
signed char var_11 = (signed char)-76;
int zero = 0;
short var_13 = (short)2823;
signed char var_14 = (signed char)63;
int var_15 = -190528286;
unsigned short var_16 = (unsigned short)29128;
long long int var_17 = -5475488015666828259LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
