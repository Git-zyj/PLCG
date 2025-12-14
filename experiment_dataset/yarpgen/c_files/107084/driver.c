#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)36;
unsigned short var_8 = (unsigned short)41569;
unsigned long long int var_9 = 2157026109144155004ULL;
int var_11 = -371404559;
short var_12 = (short)-8293;
long long int var_13 = -37176561108776145LL;
unsigned short var_14 = (unsigned short)56919;
unsigned int var_15 = 330356582U;
short var_16 = (short)-3057;
int zero = 0;
unsigned short var_17 = (unsigned short)907;
long long int var_18 = 4179916491762812589LL;
short var_19 = (short)14381;
int var_20 = -419293410;
long long int var_21 = 3356172418787919963LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
