#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3270034241U;
short var_1 = (short)-12389;
long long int var_2 = 153977758858284104LL;
unsigned long long int var_4 = 18446641289314603310ULL;
long long int var_5 = 8666552600583255950LL;
unsigned short var_6 = (unsigned short)18407;
unsigned short var_8 = (unsigned short)12086;
unsigned char var_10 = (unsigned char)197;
int zero = 0;
unsigned int var_11 = 441939143U;
unsigned int var_12 = 1749373868U;
unsigned short var_13 = (unsigned short)53491;
unsigned long long int var_14 = 2867522635671068223ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
