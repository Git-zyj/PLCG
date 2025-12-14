#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8038230393976179808ULL;
unsigned long long int var_2 = 16773846573167017317ULL;
unsigned long long int var_3 = 10373773901729276119ULL;
unsigned long long int var_8 = 16185443945279290473ULL;
unsigned long long int var_11 = 5407620486872099429ULL;
unsigned long long int var_14 = 11101834162436592050ULL;
unsigned long long int var_15 = 7561283584923171693ULL;
int zero = 0;
unsigned long long int var_16 = 10100169173252724997ULL;
unsigned long long int var_17 = 1667653105053500545ULL;
unsigned long long int var_18 = 2893506888745114564ULL;
unsigned long long int var_19 = 10019214663217941374ULL;
void init() {
}

void checksum() {
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
