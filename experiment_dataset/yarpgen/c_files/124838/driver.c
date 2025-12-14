#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4910092249282526197LL;
int var_2 = -261068003;
short var_5 = (short)-12813;
unsigned long long int var_6 = 12256060954831005177ULL;
long long int var_7 = -5377097030666263240LL;
unsigned int var_8 = 3971512384U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1463744594U;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_15 = (short)-7654;
long long int var_16 = 1435445522235291841LL;
unsigned long long int var_17 = 4830296881378958098ULL;
short var_18 = (short)5147;
unsigned long long int var_19 = 576938711669069234ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
