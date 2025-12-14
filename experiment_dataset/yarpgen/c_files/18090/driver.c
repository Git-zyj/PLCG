#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)40;
short var_6 = (short)-32521;
unsigned long long int var_11 = 9998337572782432509ULL;
unsigned long long int var_13 = 15952807435921005899ULL;
int zero = 0;
unsigned long long int var_18 = 15382003975005983455ULL;
signed char var_19 = (signed char)76;
signed char var_20 = (signed char)-97;
unsigned long long int var_21 = 16767285765201434661ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
