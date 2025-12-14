#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11117629024746015274ULL;
unsigned long long int var_5 = 1945277024195957252ULL;
unsigned long long int var_9 = 6884647358028091557ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)202;
unsigned short var_13 = (unsigned short)9273;
unsigned short var_14 = (unsigned short)47549;
void init() {
}

void checksum() {
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
