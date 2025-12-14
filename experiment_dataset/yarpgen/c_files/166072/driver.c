#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3061216530190143429ULL;
unsigned char var_2 = (unsigned char)214;
unsigned long long int var_3 = 6535693124297143095ULL;
int var_6 = -1095078228;
int var_7 = -1769613335;
int var_9 = 1152184855;
int var_11 = -792259291;
int zero = 0;
short var_12 = (short)-24915;
unsigned short var_13 = (unsigned short)7833;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
