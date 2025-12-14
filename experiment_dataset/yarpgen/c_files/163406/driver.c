#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3998712839U;
short var_2 = (short)22857;
unsigned short var_14 = (unsigned short)30664;
int zero = 0;
int var_16 = 1693858982;
signed char var_17 = (signed char)-52;
unsigned char var_18 = (unsigned char)121;
int var_19 = -58209590;
int var_20 = -329319564;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
