#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3603284888197028986LL;
long long int var_1 = 5256970582508302542LL;
unsigned int var_2 = 2406470213U;
long long int var_3 = -7952323499379495467LL;
unsigned long long int var_6 = 9904994650646326219ULL;
long long int var_8 = 7295044748690944630LL;
int zero = 0;
int var_11 = -1196578321;
long long int var_12 = 6541418868460442864LL;
unsigned long long int var_13 = 2625834001502373414ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
