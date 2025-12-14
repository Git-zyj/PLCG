#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2146763317910782287LL;
signed char var_3 = (signed char)-45;
unsigned int var_4 = 3062224415U;
int var_5 = -947063949;
signed char var_8 = (signed char)37;
unsigned char var_9 = (unsigned char)4;
int zero = 0;
unsigned char var_14 = (unsigned char)182;
unsigned long long int var_15 = 2057414133815607427ULL;
void init() {
}

void checksum() {
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
