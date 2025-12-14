#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1048781879;
unsigned long long int var_2 = 3672555402949913394ULL;
long long int var_3 = -1068715218915091389LL;
unsigned char var_4 = (unsigned char)134;
unsigned short var_6 = (unsigned short)20113;
int var_9 = 414856696;
long long int var_10 = -258475749921004250LL;
int zero = 0;
short var_11 = (short)-16917;
unsigned long long int var_12 = 11834187628445796411ULL;
void init() {
}

void checksum() {
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
