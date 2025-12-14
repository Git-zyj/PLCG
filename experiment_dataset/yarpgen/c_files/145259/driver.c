#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -941131229217345649LL;
short var_6 = (short)-9686;
long long int var_9 = 8269249006000054757LL;
int zero = 0;
long long int var_16 = 1383592605263263281LL;
unsigned long long int var_17 = 14084297323703230196ULL;
void init() {
}

void checksum() {
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
