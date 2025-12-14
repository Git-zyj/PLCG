#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19939;
int var_5 = 617193251;
unsigned short var_10 = (unsigned short)14394;
int zero = 0;
unsigned short var_13 = (unsigned short)19183;
unsigned long long int var_14 = 9990801531379603325ULL;
int var_15 = 2112528454;
void init() {
}

void checksum() {
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
