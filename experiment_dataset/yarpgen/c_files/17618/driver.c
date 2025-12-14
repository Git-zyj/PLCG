#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -12678018;
unsigned long long int var_7 = 6484897554019369017ULL;
signed char var_9 = (signed char)-25;
unsigned int var_11 = 3697566076U;
unsigned short var_15 = (unsigned short)63733;
int zero = 0;
unsigned char var_19 = (unsigned char)155;
unsigned char var_20 = (unsigned char)0;
unsigned short var_21 = (unsigned short)51844;
long long int var_22 = -7590744441886159944LL;
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
