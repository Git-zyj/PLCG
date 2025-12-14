#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 396463073211322027LL;
signed char var_1 = (signed char)78;
unsigned int var_2 = 3488017832U;
long long int var_3 = 1263398029998307366LL;
unsigned char var_4 = (unsigned char)143;
int var_6 = -1574003979;
long long int var_7 = 9067830184058967037LL;
short var_9 = (short)20472;
int zero = 0;
signed char var_10 = (signed char)-103;
long long int var_11 = -3976156354902449919LL;
signed char var_12 = (signed char)9;
unsigned char var_13 = (unsigned char)125;
int var_14 = -1619712418;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
