#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-72;
long long int var_3 = 5371491334966166931LL;
int var_4 = 1019952867;
signed char var_6 = (signed char)7;
unsigned long long int var_8 = 8648195692573382921ULL;
short var_10 = (short)-18162;
int zero = 0;
short var_11 = (short)-28159;
unsigned long long int var_12 = 894884819538625926ULL;
long long int var_13 = 7109441143529102274LL;
unsigned long long int var_14 = 14999022371389033411ULL;
signed char var_15 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
