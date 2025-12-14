#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)58609;
signed char var_8 = (signed char)-114;
unsigned char var_12 = (unsigned char)115;
unsigned long long int var_13 = 12506908238657099129ULL;
int zero = 0;
unsigned long long int var_19 = 5747662336167379126ULL;
unsigned char var_20 = (unsigned char)186;
long long int var_21 = 1003284928094458151LL;
void init() {
}

void checksum() {
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
