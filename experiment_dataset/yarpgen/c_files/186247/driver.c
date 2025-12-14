#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5455271442950941019ULL;
short var_1 = (short)28168;
signed char var_2 = (signed char)39;
long long int var_4 = 8843996809620756677LL;
long long int var_5 = -9203089578525822640LL;
long long int var_6 = -9078487969978764005LL;
int var_8 = -968283247;
unsigned short var_9 = (unsigned short)25740;
int zero = 0;
unsigned long long int var_11 = 10338107083507176929ULL;
signed char var_12 = (signed char)-104;
int var_13 = 1884226183;
unsigned char var_14 = (unsigned char)17;
unsigned int var_15 = 3219300657U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
