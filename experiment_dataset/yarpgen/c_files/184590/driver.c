#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
unsigned short var_2 = (unsigned short)29175;
unsigned int var_3 = 3280978683U;
int var_4 = -1748814042;
int var_5 = 1485703808;
unsigned long long int var_7 = 9191663240955524437ULL;
long long int var_8 = -1327162769802011033LL;
int zero = 0;
unsigned short var_10 = (unsigned short)27748;
unsigned int var_11 = 1614541865U;
signed char var_12 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
