#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
int var_1 = 553931242;
unsigned char var_2 = (unsigned char)216;
int var_3 = -261085154;
signed char var_7 = (signed char)98;
int var_9 = -1872009218;
int var_10 = 77463842;
int zero = 0;
unsigned long long int var_12 = 3099443629548001408ULL;
unsigned short var_13 = (unsigned short)18381;
signed char var_14 = (signed char)64;
int var_15 = 319475930;
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
