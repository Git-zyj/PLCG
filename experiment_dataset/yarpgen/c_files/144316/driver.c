#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1547664020U;
unsigned int var_1 = 770845549U;
signed char var_5 = (signed char)-26;
unsigned short var_6 = (unsigned short)56557;
signed char var_9 = (signed char)-114;
unsigned short var_11 = (unsigned short)14640;
int zero = 0;
unsigned short var_13 = (unsigned short)61880;
unsigned short var_14 = (unsigned short)37156;
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
