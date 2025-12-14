#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
unsigned short var_3 = (unsigned short)20780;
long long int var_7 = 3426449030496165228LL;
int var_8 = -1588175274;
unsigned int var_12 = 1601765824U;
int var_15 = 988721499;
int zero = 0;
int var_18 = -1794719265;
long long int var_19 = 8144726657540395754LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
