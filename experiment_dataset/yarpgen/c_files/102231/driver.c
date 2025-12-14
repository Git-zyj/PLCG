#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 412755305173174261ULL;
int var_2 = -257182167;
int var_4 = -1520671982;
int var_5 = 1865072183;
short var_6 = (short)-12424;
unsigned long long int var_8 = 10672275091145838534ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 12799850127363130382ULL;
signed char var_13 = (signed char)83;
short var_14 = (short)-26476;
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
