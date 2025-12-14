#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16261040803950102775ULL;
int var_4 = 1953530891;
int var_7 = 816162703;
int var_10 = -212408002;
int var_11 = 2097557216;
unsigned long long int var_12 = 18321954163355854568ULL;
unsigned long long int var_13 = 10425673391204659563ULL;
int var_14 = -120923512;
int var_15 = -1458023559;
int var_16 = -83576355;
int var_17 = 192775606;
int zero = 0;
unsigned long long int var_19 = 3387956550795065784ULL;
int var_20 = -1257302246;
unsigned long long int var_21 = 17441656606118271370ULL;
int var_22 = 1222490715;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
