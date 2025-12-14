#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59646;
unsigned long long int var_1 = 905766245422586077ULL;
short var_3 = (short)-12804;
unsigned long long int var_6 = 10798464947368406379ULL;
unsigned long long int var_7 = 8098122210056644025ULL;
unsigned long long int var_8 = 17534860718703998100ULL;
int zero = 0;
unsigned long long int var_10 = 18107680098632374499ULL;
unsigned long long int var_11 = 3735781783242160417ULL;
unsigned short var_12 = (unsigned short)5908;
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
