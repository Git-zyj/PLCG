#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 969806126U;
unsigned int var_8 = 757316263U;
short var_11 = (short)-32689;
int var_13 = 1816169046;
int zero = 0;
unsigned long long int var_15 = 15746657487288383249ULL;
unsigned long long int var_16 = 17808569160443405524ULL;
unsigned short var_17 = (unsigned short)51;
long long int var_18 = 4829580070372526532LL;
void init() {
}

void checksum() {
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
