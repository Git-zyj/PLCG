#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7511719813507234530ULL;
unsigned short var_13 = (unsigned short)41193;
int zero = 0;
int var_16 = 657799933;
unsigned char var_17 = (unsigned char)145;
unsigned long long int var_18 = 5251318651245620283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
