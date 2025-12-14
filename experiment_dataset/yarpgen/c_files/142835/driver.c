#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
unsigned long long int var_5 = 9436796230392008946ULL;
short var_7 = (short)-6424;
signed char var_9 = (signed char)60;
signed char var_18 = (signed char)-57;
int zero = 0;
short var_19 = (short)-4407;
long long int var_20 = -708595113340154422LL;
short var_21 = (short)13684;
unsigned char var_22 = (unsigned char)211;
long long int var_23 = -980960232690409064LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
