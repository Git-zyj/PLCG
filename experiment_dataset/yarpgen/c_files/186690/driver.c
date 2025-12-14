#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14496402021730715791ULL;
int var_1 = 19351732;
int var_2 = -1014379895;
signed char var_3 = (signed char)-43;
signed char var_7 = (signed char)85;
short var_10 = (short)-15367;
int zero = 0;
unsigned long long int var_11 = 13591103157101513895ULL;
unsigned long long int var_12 = 17757144176030167249ULL;
int var_13 = 1887297155;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
