#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10120838757995485713ULL;
unsigned long long int var_4 = 12392486466737223988ULL;
unsigned long long int var_5 = 15334492584691518765ULL;
unsigned long long int var_7 = 3123943804738109201ULL;
unsigned long long int var_9 = 15641374971371788929ULL;
int zero = 0;
unsigned long long int var_13 = 17318518652510941060ULL;
unsigned long long int var_14 = 3372319903136794464ULL;
void init() {
}

void checksum() {
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
