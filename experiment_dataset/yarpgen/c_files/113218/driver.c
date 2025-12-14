#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53403;
unsigned long long int var_1 = 3102333671602430382ULL;
unsigned long long int var_2 = 12068525865786006015ULL;
unsigned long long int var_8 = 1921552734694258969ULL;
unsigned short var_9 = (unsigned short)15952;
signed char var_10 = (signed char)-28;
int zero = 0;
unsigned long long int var_13 = 5302433822936124043ULL;
signed char var_14 = (signed char)-66;
unsigned long long int var_15 = 4005536944414329958ULL;
unsigned long long int var_16 = 12087411898918637673ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
