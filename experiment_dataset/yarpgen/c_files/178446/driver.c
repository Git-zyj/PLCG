#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10131771811347697402ULL;
unsigned int var_2 = 1735309668U;
unsigned short var_6 = (unsigned short)31041;
short var_7 = (short)28314;
short var_9 = (short)6834;
int zero = 0;
short var_13 = (short)-11483;
unsigned char var_14 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
