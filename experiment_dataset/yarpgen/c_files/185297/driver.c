#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13454;
unsigned char var_2 = (unsigned char)182;
unsigned long long int var_10 = 11825812382481589806ULL;
unsigned int var_11 = 3902816234U;
int zero = 0;
signed char var_14 = (signed char)-71;
long long int var_15 = 3552603619977963460LL;
int var_16 = -1438805207;
signed char var_17 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
