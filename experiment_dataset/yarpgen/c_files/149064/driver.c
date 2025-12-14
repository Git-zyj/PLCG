#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
unsigned short var_4 = (unsigned short)1307;
unsigned long long int var_5 = 15814492644632689828ULL;
int var_9 = -1195115440;
signed char var_12 = (signed char)30;
int zero = 0;
signed char var_18 = (signed char)-26;
int var_19 = 1629996421;
unsigned long long int var_20 = 17065532361162513956ULL;
void init() {
}

void checksum() {
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
