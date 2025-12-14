#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1742858746U;
long long int var_9 = -5514276589361234371LL;
unsigned long long int var_10 = 7773720313209445973ULL;
long long int var_14 = 3382075916932310566LL;
unsigned char var_15 = (unsigned char)113;
unsigned int var_18 = 1772844733U;
int zero = 0;
short var_19 = (short)-5957;
unsigned long long int var_20 = 17983071857275349553ULL;
signed char var_21 = (signed char)-105;
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
