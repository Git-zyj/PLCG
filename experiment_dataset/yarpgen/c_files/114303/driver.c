#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3053660140452182471ULL;
long long int var_2 = -238447267302994558LL;
long long int var_3 = -8211678298937662073LL;
short var_5 = (short)17119;
unsigned int var_6 = 1366192622U;
unsigned short var_7 = (unsigned short)39276;
long long int var_8 = -7027286282337653423LL;
unsigned short var_12 = (unsigned short)51654;
unsigned int var_13 = 3738571408U;
int zero = 0;
long long int var_14 = -150389213576957802LL;
unsigned int var_15 = 3598131243U;
unsigned long long int var_16 = 9907527506650178336ULL;
unsigned short var_17 = (unsigned short)13764;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
