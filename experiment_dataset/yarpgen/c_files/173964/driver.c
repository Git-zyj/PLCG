#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7443040763339360450LL;
long long int var_3 = -1872405764991034032LL;
long long int var_4 = -5443370836066154267LL;
unsigned int var_7 = 303089712U;
long long int var_8 = 8483959623523347065LL;
unsigned int var_10 = 1384329561U;
long long int var_11 = -8118672530900988478LL;
signed char var_12 = (signed char)-34;
signed char var_14 = (signed char)4;
int zero = 0;
unsigned char var_16 = (unsigned char)224;
long long int var_17 = 2288252601893080699LL;
int var_18 = -682573659;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
