#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 910343654445638724ULL;
unsigned long long int var_4 = 16686996284193025398ULL;
int var_5 = 1445764055;
unsigned long long int var_6 = 3146731794714770741ULL;
unsigned long long int var_8 = 1593109597003594845ULL;
short var_9 = (short)-25701;
int zero = 0;
signed char var_10 = (signed char)-45;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
