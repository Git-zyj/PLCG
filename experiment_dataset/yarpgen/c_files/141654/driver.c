#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20944;
unsigned char var_2 = (unsigned char)130;
long long int var_3 = 6099134432438134463LL;
unsigned long long int var_5 = 13956551716212450651ULL;
unsigned short var_6 = (unsigned short)47963;
unsigned short var_8 = (unsigned short)4317;
long long int var_9 = -5521084412485176789LL;
long long int var_10 = -5186931737212722748LL;
short var_13 = (short)-19567;
int zero = 0;
unsigned long long int var_14 = 8059214470737802326ULL;
unsigned char var_15 = (unsigned char)222;
short var_16 = (short)18308;
unsigned char var_17 = (unsigned char)102;
long long int var_18 = 3129294309358250640LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
