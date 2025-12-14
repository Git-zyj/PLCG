#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9221972886176276592ULL;
unsigned long long int var_2 = 13368283732431792780ULL;
unsigned long long int var_5 = 14470286180682419645ULL;
unsigned char var_6 = (unsigned char)189;
unsigned long long int var_8 = 13796059825109727659ULL;
unsigned char var_10 = (unsigned char)46;
long long int var_11 = -5825980647455800571LL;
unsigned long long int var_12 = 2693876223709310710ULL;
int zero = 0;
long long int var_14 = 6010839434709395426LL;
short var_15 = (short)7439;
signed char var_16 = (signed char)60;
unsigned int var_17 = 3133892735U;
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
